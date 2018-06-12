// Write a C program to copy one string to another string using loop. 
// C program to copy one string to another without using inbuilt library function strcpy().
// How to copy one string to another without using inbuilt string library function in C programming.
// Effective logic to copy strings in C programming.
// How to copy one string to another string using strcpy() function in C program.

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main ()
{
    char str[MAX_SIZE], copy[MAX_SIZE];

    int index = 0;

    printf("Enter with a text:\n");
    
    gets(str);

    strcpy(copy, str);

    // while (str[index] != '\0')
    // {
    //     copy[index] = str[index];
        
    //     index++; 
    // }

    printf("Original: %s\n", str);
    printf("Copy: %s\n", copy);
    // printf("amount of chars: %d\n", index);


    
    return 0;
}