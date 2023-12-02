// this is the boiler plate of C

#include <stdio.h> // with out this header file compiler will don't know what is printf

/*
about this #include<stdio.h>
This is preprocessor directive command, anything going to the preprocessor
starts with a 'POUND' -> # This preprocessor command isn't need every time but
to have the ability to include the file, include allows us to import code from
other files to our code. In this case we are including 'stdio.h' or standard i/o
.h means file is header (header file contain mainly the declaration part and is
installed on all computer) which allow use of 'printf' in this program
*/

//user defined function you can have many such custom/user defined function more on function in other folder

int add3(int a, int b, int c) {
  int result = a + b + c;
  return result; // add and return the result
}

// main function
int main(void) {
  // void -> return type of main function
  printf("Hello World!\n");
  //  f in the printf stands for formatted, it acts as an placeholder and
  //  substitute for variable (more on this in next folders) it let the compiler
  //  know what type the variable is when value of output is unkown

  // \n is an espace character used to print a new line

  printf("%i", add3(1, 3, 2)); // calling the add3 function
}

/*
The part form int main(void){} -> is the function definition part
*  */