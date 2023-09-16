/*
 * File: wordcount.c
 * YOUR NAME ... YOU NEED TO IMPLEMENT THE FUNCTIONS HERE....
 *
 * ....
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
// include other standard header files or your own user defined libraries needed

int main(int argc, char *arvg[])
{

  // take the name of an input file as a command line argument and open file argv[1] to read
  FILE *filePointer = fopen(arvg[1], "r");

  int pid = getpid();

  // if file can not be opened, return/exit with exit code 1. give error
  if (filePointer == NULL)
  {
    printf("wordcount with process %i cannot open %s\n", pid, arvg[1]);
    return 1;
  }
  else
  {
    int numberOfWords = 0;
    char currentChar;
    char previousChar = ' ';

    // read data from file
    while ((currentChar = fgetc(filePointer)) != EOF)
    {
      // if file opened, count/print number of words in file argc[1] and return w/ exit code 0
      if (isspace(currentChar) && !isspace(previousChar))
      {
        numberOfWords++;
      }
      previousChar = currentChar;
    }

    if (!isspace(previousChar))
    {
      numberOfWords++;
    }

    // close the file
    fclose(filePointer);

    // number of words no longer working
    printf("wordcount with process %d counted words in %s: number of words is %i\n", pid, arvg[1], numberOfWords);
  }
  return 0;
}
