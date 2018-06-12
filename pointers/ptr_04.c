// Write a C program to input elements in an array and print array using pointers.
// How to input and display array elements using pointer in C programming.

#include <stdio.h>
#define MAX 100

int main(int argc, char * argv){
	int vec[MAX], size, *ptr;
	
	ptr = vec;
	
	printf("Enter with the size of array:\n");
	scanf("%d", &size);

	printf("Enter with the elements of array:\n");
	for(int i = 0; i < size; i++){
		scanf("%d", ptr+i);
	}

	printf("Array elements:\n");
	for(int k = 0; k < size; k++){
		printf("%d\n", *(vec+k));
	}

	return 0;
}