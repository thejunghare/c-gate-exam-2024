#include <stdio.h>

int main(void) {
  int x = 1, y = 2;

  if (x < y) {
    printf("x is less than y \n");
    // Because  x < y is true ,
    // this block of code will be executed
    // resulting in printing the statement of the if branch
  } else if (x > y) {
    printf("x is greater than y \n");
  } else {
    printf("x and y are equal \n");
  }
}