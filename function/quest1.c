#include <stdio.h>

void swap(int *num1, int *num2);


int main ()
{
    int num, numb;

    printf("Enter with value:\n");

    scanf("%d %d", &num, &numb);

    printf("after swap: %d %d\n", num, numb);

    swap(&num, &numb);

    printf("after swap: %d %d\n", num, numb);

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;

    printf("\nswap!\n\n");
}