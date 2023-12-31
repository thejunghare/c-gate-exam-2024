#include <stdio.h>
#include <string.h>

int get_length_string(char *str)
{
    int offset = 0;
    while (str[offset] != 0)
    {
        offset++;
    }
    return offset;
}

void copy_string(char *from, char *to)
{
    int offset = 0;
    while (from[offset] != 0)
    {
        to[offset] = from[offset];
        offset++;
    }

    to[offset] = 0;
}

char *reverse_string(char *str)
{
    if (str == NULL)
    {
        printf("Null string\n");
        return NULL;
    }

    int length = strlen(str);
    char *reversed = malloc((length + 1) * sizeof(char)); // Allocate memory for the reversed string
    if (reversed == NULL)
    {
        printf("Memory allocation failed\n");
        return NULL;
    }

    strcpy(reversed, str); // Copy the input string to the newly allocated memory

    int start = 0, end = length - 1;

    while (start < end)
    {
        // swap characters
        char temp = reversed[start];
        reversed[start] = reversed[end];
        reversed[end] = temp;

        start++;
        end--;
    }

    return reversed;
}

int main(void)
{
    /*
        string ->  A sequence of characters, whether a sentence or a paragraph, can be an array of characters.
        In C string are array of characters which has a null termination [meaning a zero at end]
        Zero tells you that it's the end of string, with zero srtring will keep going forever.

        ever char is a single byte [some value from 0-128, we use ASCII  standards to map numbers to characters]

        Types of char -> 1. controlable char a& 2. printable char

        Task -> 1. implement a function that reverse a string & 2. implement a function to copy string to different array.
    */

    char *fname = "Prasad";

    printf("%s\12", fname); // printf("%s\n", fname);

    char str[] = "Hello World"; //[H,E,L,L,O, ,W,O,R,L,D,0] ->  size of string -> 12 bytes
    printf("%s\xA", str);       // printf("%s\n", fname);

    printf("%s %d\n", str, get_length_string(str));
    printf("%s %lu\n", str, strlen(str)); // this need string.h header

    char *reversed = reverse_string(fname);

    if (reversed != NULL)
    {
        printf("Reversed string: %s\n", reversed);

        free(reversed); // Free the allocated memory when done
    }

    return 0;
}