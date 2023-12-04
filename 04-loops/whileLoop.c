#include <stdio.h>

/*
while loops have to check a condition. If it is met, the code runs.
If not, the code doesn't take any action.
!So, code is not guaranteed to run even at least one time if a condition is not
met.!
*/

int main(void) {
  while (true) {
    // In this case expression is always true hence this is
    // infinite while loop
    printf("Hello World");
    // use ctrl + c to stop the infinite loop

    // if the codition was false it would have never run

    // the other type of while loop is that repeats something a certain
    // number of times
  }

  int i = 0;

  while (i < 10) {
    // while i is less than 10 run this code
    printf("Hello World");
    // increment i everytime and check the condition again
    i++;
    // once i is greater than 10 this loop will end 
  }
}