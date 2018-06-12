// Write a C program to find length of a string using loop. 
// How to find length of a string without using in-built library function strlen() in C programming.
// Effective way to find length of a string without using strlen() function.
// How to find length of a string using strlen() string function.


#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main ()
{
    char str[MAX_SIZE];
    
    int index;

    printf("Enter with a text:\n");

    gets(str);

    index = strlen(str);

    // while (str[index] != '\0')

    //     index++;

    printf("The string '%s' size = %d\n", str, index);

    return 0;

}