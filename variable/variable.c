#include <stdio.h>

int main(void) {
  int n;    // declaration
  n = 4307; // initialisation
  // int is datatype
  // n is the name of variable and can store postivie/negative whole numbers or
  // 0 = is the assignment operator 27 is the value

  // Declare multiple value at once
  int roll, age;
  age = 22; // age is 22
  age = 23; // now age is 23
  
  // Variable name are case sensitive age and Age are two different variable name's
  
  /*
   1. Local scope: Variable declared inside the {} are local scope variable rest program will don't know if this variable exist's.
   2. Global scope: Variable declared outside any function have global scope they can used any where in the code.
  */
  
  printf("My age is %i\n", age);
}