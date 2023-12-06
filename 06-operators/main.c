#include <stdio.h>

int main(void)
{
    /*
        1. Arithmetic Operators -> +, -, /, *
        2. Incremenet & decrement operators -> ++, --
        3. Comparison operators -> =, ==, !=
        4. Bitwise operators -> bitwise not  turns 0s to 1s and vise versa, XOR -> 
    */

    int x = 8;
    int y = x++;

    printf("%i\n", y); // 8
    printf("%i\n", x); // 9

    int z = ++x;
    printf("%i\n", z); // 10

    /*
        = -> assignment

        == -> equals? [returns true or false]
        != -> not equals? [returns true or false]
        x > y -> greater than  [returns true or false]
        x < y -> less than [returns true or false]
        x >= y -> greater than equal to... [returns true or false]
        x <= y -> less than equal to... [returns true or false]

        &&, ||
    */

    /*
        int num = 5; // 0b101
        
        this operator are based on digital logic 
        XOR -> 0 0 -> 0, 1 0 -> 1, 0 1 -> 1, 1 1 0
        
        swift operator -> swift right [>>] and swift left [<<]
        right swift by 1 bit is like dividing by 2
        left swift by 1 bit is like multiple by 2
    */

    return 0;
}