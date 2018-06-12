// Write a C program to swap two numbers using pointers and functions. How to swap two numbers using call by reference method. Logic to swap two number using pointers in C program.

#include <stdio.h>

void swap(int *num1, int *num2);

int main(int argc, char * argv) {
	int num1, num2;

	printf("enter with the values: \n");
	scanf("%d %d", &num1, &num2);

	printf("Before swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);

    swap(&num1, &num2);

    printf("After swapping in main n");
    printf("Value of num1 = %d \n", num1);
    printf("Value of num2 = %d \n\n", num2);


	return 0;
}

void swap(int *num1, int *num2){
	int temp;

	temp = *num1;

	*num1 = *num2;

	*num2 = temp;

	printf("After swapping in swap function n");
    printf("Value of num1 = %d \n", *num1);
    printf("Value of num2 = %d \n\n", *num2);
}