// Write a C program to add two numbers using pointers.
#include<stdio.h>

int main (int argc, char * argv){
	int num1, num2, *ptr1, *ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	scanf("%d %d", ptr1, ptr2);

	printf("%d\n", *ptr1 + *ptr2);

	return 0;
}