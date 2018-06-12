// Write a C program to convert string from lowercase to uppercase string using loop. 
// How to convert string from lowercase to uppercase using for loop in C programming. 
// C program to convert lowercase to uppercase string using strupr() string function.

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main ()
{
    char str[MAX_SIZE];
    char *ptr = str;

    printf("Enter with a string:\n");
    
    gets(str);


    while (*ptr){
    
        *ptr = (*ptr >= 'a' && *ptr <= 'z') ? *ptr - 32 : *ptr;
    
        ptr++;

    }


    printf("string '%s' in uppercase\n", str);

    return 0;

}
 