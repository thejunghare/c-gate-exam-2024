#include <stdio.h>

int main(void) {

  /*
  for exists becuase folks do this counter based loopig ever time and foor loop
  is designed   to make this easy 1     2    3 for (expr; expr; expr){
    repetitive_code();
  }

  1 -> init -> code here will start before the loop starts
  2 -> cond -> loop will run as long as this condition is satisfied
  3 -> post -> run at the end each time through the loop

  */

  int nums[5] = {1, 2, 3, 4, 5};

  for (int counter = 4; counter >= 0; counter--) {
    printf("nums[%i] = %i\n", counter, nums[counter]);
  }

  /*
    break -> break say exist the loop
  contiune -> say I am done with the current irritation loop start the next one
  */

  return 0;
}