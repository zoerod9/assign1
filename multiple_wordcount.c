/*
 * File: multiple_wordcount.c
 * YOUR NAME ... YOU NEED TO IMPLEMENT THE FUNCTIONS HERE....
 *
 * ....
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
// include other standard header files or your own user defined libraries needed 

 



// for each file, forks a child to execute wordcount for each file
// parent will wait for child processed 
// parent will inspect child's exit codes
// parent prints how many files are counted and how many did not exist

/*
for(i=1; i < argc; i++) {
   cpid = fork();
   if (cpid == -1) { ... }
   if (cpid == 0) {
     // this part is for child process
     // exec(...) the wordcount program with argv[i] as a parameter
     // if exec() is successful, the child process will be replaced by wordcount
     // BUT, if exec() fails, the child will continue executing statements here!
     // So, print an error message here and
     // return/exit with an exit code of 2, indicating that exec failed.
     // Otherwise (if you don't exit), what will happen?
   }
   // this part is for parent process ! But, DO NOT WAIT FOR A CHILD HERE !
}

// after the parent creates all children, it comes to this part
for( ; ; ) {
   // ! WAIT HERE FOR ALL CHILD PROCESSES and CHECK THEIR EXIT CODES !
}
*/

int main(int argc, char *argv[])
{
  // take names of multiple input files as command line args
// determines number of files
// FILE *filePointer = fopen(argv[1], "r");
// printf("testing here");
// char i;

// for (i = 0; i < argv[i-1]; i++)
// {
//   printf("printed file");
// }
  return 0;
}
   