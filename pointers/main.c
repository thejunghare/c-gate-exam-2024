#include <stdio.h>

int main(void)
{
    int y = 7;
    int *p = &y; // variable pointer store memory address of variable 'y'

    printf("%p %i\n", p , *p);
    return 0;
}