// Write a C programmingm to copy one array elements to another array using pointers. 
// How to copy array elements from one array to another array using pointers. 
// Logic to copy one array to another array using pointers in C programming.

#include <stdio.h>
#define MAX 100

void printArray(int arr[], int size);

int main(int argc, char * argv[]){
	int size;
	int source_array[MAX], dest_array[MAX]; 
	int *ptr_source = source_array;
	int *ptr_dest = dest_array;
	int *end_ptr;
	

	printf("Enter with the size of array\n");
	scanf("%d", &size);

	printf("Enter with the elements of array:\n");
	for (int i = 0; i < size; i++){
		scanf("%d", (source_array + i));
	}

	end_ptr = &source_array[size - 1]; //end_ptr is the last element of the array

	printf("\nSource Array before copy: ");
	printArray(source_array,size);

	printf("\nDestination Array before copy: ");
	printArray(dest_array,size);	


	while(ptr_source <= end_ptr) {
		*ptr_dest = *ptr_source;

		ptr_source++;
		ptr_dest++;
	}

	printf("\nSource Array after copy: ");
	printArray(source_array, size);

	printf("\nDestination Array after copy: ");
	printArray(dest_array, size);

	return 0;
}

void printArray(int arr[], int size){
	for (int i = 0; i < size; i++)
		printf("%d ", *(arr + i));
}