// Write a C program to concatenate two strings in single string.
// How to concatenate two strings to one without using strcat() library function.
// Adding two strings into one without using inbuilt library function. 
// Logic to concatenate two strings in C programming.
// C program to concatenate two strings using strcat() library function.

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int main ()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    int index, jindex;

    printf("Enter with a text:\n");

    gets(str1);

    printf("Enter with other text:\n");

    gets(str2);

    strcat(str1, str2);

    // index = 0;

    // //read all the string;
    // while (str1[index] != '\0')

    //     index++;

    
    // jindex = 0;

    // //cpy str2 to str1
    // while (str2[jindex] != '\0')
    // {
    //     str1[index] = str2[jindex];
    //     index++;
    //     jindex++;
    // }
    

    printf("Concatenated string = %s\n", str1);

    return 0;
}