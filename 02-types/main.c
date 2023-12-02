#include <stdio.h>

/*
Types of data types in c
Numerical, Arrays, Structs, Pointers
Numberical -> int, float, double

'INT'
Sr. s/uns            type/name    byte      range
1. signed/unsigned   char         1 byte    255
2. signed/unsigned   short        2 bytes   65, 535
3. signed/unsigned   int          4 bytes   4B
4. signed/unsigned   long         4 bytes   4B
5. signed/unsigned   long long    8 bytes   2[64-1]

FIXED WIDTH LENGTH -> <stdint.h>
int8_t -> int with 8 bit long with
uint64_t

'int' can't represent value with floating point
for eg. int mynumber = 3; // correct
& int mynumber = 3.4 // incorrect
*/

int main(void) {
  printf("Intro to types in c");
  return 0;
}