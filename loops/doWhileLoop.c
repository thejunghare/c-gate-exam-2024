// compared to while, do-while loop is guaranteed to run once and
// execute the code inside the {} atleast once

#include<stdio.h>

int main(){
  int i = 10;
  // this first does something and than check's the codition
  do {
    printf("Hello World!");
    i++;
  } while(i < 20);
}