/*
 * File: wordcount.c
 * YOUR NAME ... YOU NEED TO IMPLEMENT THE FUNCTIONS HERE....
 *
 * ....
 */

#include <stdio.h>
#include <stdlib.h>
// include other standard header files or your own user defined libraries needed

int main(int argc, char *arvg[])
{
  
  char fileCharacters;
  FILE *filePointer;

  // data to be read from file
  int numberOfCharacters;

// take the name of an input file as a command line argument and open file argv[1] to read
  filePointer = fopen("input_file_1.txt", "r");

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
      // count words
      if(fileCharacters == ' ' || fileCharacters == '\n')
        numberOfCharacters++;
    }


      
      // if file opened, count/print number of words in file argc[1] and return w/ exit code 0

      // you can read file line-by-line using ReadLine() from last assignment
      // then count words in each line, sum them up
      // or we can use isspace(char c) to check for white-space char
      
      // print data from file
      //printf("%s", readDataFromFile);

    // close the file
    fclose(filePointer);

    printf("wordcount with process pid_1 counted words in File_1: number of words is %d\n", numberOfCharacters);
    printf("file is now closed");
  }
  return 0;
}
