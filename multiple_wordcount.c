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

int main(int argc, char *argv[])
{
  int pids[argc - 1];
  for (int i = 1; i < argc; i++)
  {
    pid_t cpid = fork();

    if (cpid == -1)
    {
      puts("Error creating child process");
    }
    if (cpid == 0)
    {
      // this part is for child process
      char *childArgs[] = {"./wordcount", argv[i], NULL};
      int threadCreated = execvp("./wordcount", childArgs);
      // if exec() is successful, the child process will be replaced by wordcount
      if (threadCreated == -1)
      {
        puts("thread was not created");
        return 2;
      }
    }
    // this part is for parent process ! But, DO NOT WAIT FOR A CHILD HERE !
    // add to array of pids
    // i-1 because i starts at 1, array starts at 0
    pids[i - 1] = cpid;
  }

  int currentExitCode, successes = 0, failures = 0;
  for (int i = 0; i < argc - 1; i++)
  {
    waitpid(pids[i], &currentExitCode, 0);
    if (currentExitCode == 0)
    {
      successes++;
    }
    else
    {
      failures++;
    }
  }

  printf("..%i.. files have been counted successfully!\n", successes);
  printf("..%i.. files did not exist\n", failures);

  return 0;
}
