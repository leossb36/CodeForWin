//Write a C program to create, initialize and demonstrate the use of pointers. How to access values and addresses using a pointer variable in C programming.


#include <stdio.h>

int main(int argc, char * argv){
	int x = 10, *ptr;
	ptr = &x;

	printf("%d\n", x);
	printf("%p\n", &x);
	printf("%d\n", *ptr);
	printf("%p\n", &ptr);

	return 0;
}