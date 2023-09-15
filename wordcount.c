/*
 * File: wordcount.c
 * YOUR NAME ... YOU NEED TO IMPLEMENT THE FUNCTIONS HERE....
 *
 * ....
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// include other standard header files or your own user defined libraries needed

int main(int argc, char *arvg[])
{
  
  char fileCharacters;
  //FILE *filePointer;
  int numberOfCharacters;
  

// take the name of an input file as a command line argument and open file argv[1] to read
  FILE *filePointer = fopen(arvg[1], "r");

  // if file can not be opened, return/exit with exit code 1. give error
  if (filePointer == NULL)
  {
    printf("file failed to open");
  }
  else
  {
    printf("the file opened.\n");

    // read data from file
    while ((fileCharacters = fgetc(filePointer)) != EOF){
      // if file opened, count/print number of words in file argc[1] and return w/ exit code 0
      if(fileCharacters == ' ' || fileCharacters == '\n')
        numberOfCharacters++;
    }

    int pid = getpid();

    // close the file
    fclose(filePointer);

    // number of words no longer working
    printf("wordcount with process %d counted words in File_1: number of words is %c\n", pid, numberOfCharacters);
    printf("file is now closed");
  }
  return 0;
}
