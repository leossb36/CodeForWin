// Write a C program to swap corresponding elements of two arrays using pointers. 
// How to swap two arrays using pointers in C program. 
// Logic to swap two arrays of different length using pointers in C programming.

#include <stdio.h>
#define MAX_SIZE 100

void swapArray(int * sourceArr, int * destArr, int size);
void printArray(int *arr, int size);
void inputArray(int *arr, int size);

int main(int argc, char * argv[]){
	int arr_1[MAX_SIZE];
	int arr_2[MAX_SIZE];
	int size;

	printf("ENTER WITH VALUE OF ARRAY 1:\n");
	scanf("%d", &size);

	printf("ENTER %d ELEMENTS OF ARRAY 1:\n", size);
	inputArray(arr_1, size);

	printf("ENTER %d ELEMENTS OF ARRAY 2:\n", size);
	inputArray(arr_2, size);

	printf("\nSOURCE ARRAY BEFORE SWAPPING: \n");
	printArray(arr_1, size);

	printf("\nDESTINATION ARRAY BEFORE SWAPPAING: \n");
	printArray(arr_2, size);

	swapArray(arr_1, arr_2, size);
	
	printf("\nSOURCE ARRAY AFTER SWAPPING: \n");
	printArray(arr_1, size);

	printf("\nDESTINATION ARRAY AFTER SWAPPAING: \n");
	printArray(arr_2, size);



	return 0;
}

void inputArray(int *arr, int size)
{
	int *arrEnd = (arr + (size - 1));

	while (arr <= arrEnd)
		scanf("%d", arr++);

}

void swapArray(int *sourceArr, int * destArr, int size)
{
    // Pointer to last element of source array
    int *sourceArrEnd = (sourceArr + (size - 1));

    // Pointer to last element of destination array
    int * destArrEnd   = (destArr + (size - 1));


    /*
     * Swap individual element of both arrays
     */
    while(sourceArr <= sourceArrEnd && destArr <= destArrEnd)
    {
        *sourceArr ^= *destArr;
        *destArr   ^= *sourceArr;
        *sourceArr ^= *destArr;

        // Increment source array to point to next element
        sourceArr++;

        // Increment destination array to point to next element
        destArr++;
    }
}

void printArray(int *arr, int size)
{
	int *arrEnd = (arr + (size - 1));

	while(arr <= arrEnd)
	{
		printf("%d\n", *(arr++));
	}	
}
