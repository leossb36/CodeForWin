// Write a C program to compare two strings using loop character by character. 
// How to compare two strings without using inbuilt library function strcmp() in C programming. 
// Comparing two strings lexicographically without using string library functions. 
// How to compare two strings using strcmp() library function.

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100


int main ()
{
    char str1[MAX_SIZE], str2[MAX_SIZE];

    int res;

    printf("Enter with string:\n");

    gets(str1);

    printf("Enter with other string:\n");

    gets(str2);

    res = strcmp(str2, str1);

    // res = compareStr(str1, str2);
  

    if (res == 0)
        printf("both strings have the same size\n");

    else if(res == -1)
        printf("string 1 is smaller than string 2\n");

    else
        printf("string 1 is greater than string 2\n");

    
    return 0;
}


// int compareStr(char *str1, char *str2)
// {
//     int index = 0;

//     while (str1[index] == str2[index])
//     {
//         if (str1[index] == '\0' && str2[index] == '\0')
//             break;
        
//         index++;
//     }

//     return str1[index] - str2[index]; 
// }
