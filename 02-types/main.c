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

This is where floating Number comes

'CHAR'
char => often use to store character and number, stores numberical value of the
char in the variable.


'ARRAYS'
*/

struct person {
  char name[50];
  int age;
  int height_in_inches;
};

int main(void) {
  printf("Intro to types in c \n");

  // INT
  int mynumber = 9;
  printf("%i\n", mynumber);

  // CHAR
  char c = 45;
  printf("%c\n", c);

  // ARRAY
  int x[50];
  x[0] = 5;
  x[3] = 500;
  printf("%i, %i\n", x[0], x[3]);

  // STRUCT
  struct person me;
  struct person you;

  me.age = 22;
  you.height_in_inches = 4;
  printf("%i, %i\n", me.age, you.height_in_inches);

  // POINTER
  int y = 7;
  int *p = &y; // x here is not int and just an address
  printf("%p\n", p);

  return 0;
}