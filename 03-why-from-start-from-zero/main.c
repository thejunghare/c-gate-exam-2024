#include <stdio.h>

/*
Arrays and pointer are closely related

Why does arrays start form zero ?

*/

int main(void) {
  int v[4] = {1, 2, 3, 4, 5};
  int n = 9;
  // int *p = n; // this will throw an error as pointer is assign directly to am
  // integer[int]
  int *p =
      v; // This won't throw an error, because pointer can act like an error
  p[4] = 9000;

  /* Because pointer are basically arrays in different form */

  *(v + 2) = 46; // same as v[2]

  printf("v[0] = %i\n", v[0]); // printf("v[1] = %i\n", *p);
  printf("v[1] = %i\n", v[1]); // printf("v[1] = %i\n", (*p+1));
  printf("v[2] = %i\n", v[2]); // printf("v[1] = %i\n", (*p+2));
  printf("v[3] = %i\n", v[3]); // printf("v[1] = %i\n", (*p+3));
  printf("v[4] = %i\n", v[4]); // 9000 // printf("v[1] = %i\n", (*p+4));

  /* Because asking for the zero element of an array is the same as asking for
    the element to be a zero  byte at the beginning of that array.
  */

  /*
  Now let discuss how pointer and array are different,
  Whene ever we declare an array complier allocated space for an array, which
  doesn't happen when we declare a pointer, complier aslo keep eye on the size
  of the array elements which is not the case with the pointer as just an
  address in memeory
  */

  return 0;
}