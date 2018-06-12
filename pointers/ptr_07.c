// Write a C program to input elements in an array and reverse the array using pointers. 
// How to reverse an array using pointers in C programming. 
// Logic to reverse an array using pointers in C.

#include <stdio.h>
#define MAX 100

int main(int argc, char * argv[])
{
	int arr[MAX];
	int size;
	int *left = arr;
	int *right;

	printf("enter size of array: \n");
	scanf("%d", &size);

	right = &arr[size - 1];

	printf("enter with array elements:\n");
	for(int i = 0; i < size; i++)
		scanf("%d", &left[i]);

	left = arr;

	while(left < right){
		*left ^= *right;
		*right ^= *left;
		*left ^= *right;

		left++;
		right--;
	}

	printf("reverse array:\n");
	for(int k = 0; k < size; k++)
		printf("%d\n", arr[k]);

	return 0;
}

//without using another array
// {
// 	int arr[MAX];
// 	int revIndex, arrIndex, size;

// 	printf("enter with the size of array:\n");
// 	scanf("%d", &size);

// 	printf("enter with array elements:\n");
// 	for(int i = 0; i < size; i++)
// 		scanf("%d", &arr[i]);

// 	revIndex = 0;
// 	arrIndex = size - 1;
// 	int temp;
// 	while(revIndex < arrIndex){
// 		temp = arr[revIndex];
// 		arr[revIndex] = arr[arrIndex];
// 		arr[arrIndex] = temp; // copy the values of original array

// 		revIndex++;
// 		arrIndex--;
// 	}

// 	printf("reverse array:\n");
// 	for(int k = 0; k < size; k++)
// 		printf("%d\t", arr[k]);

// 	return 0;
// }
// {
// 	int arr[MAX], reverse[MAX];
// 	int revIndex, arrIndex, size;

// 	printf("enter with array size:\n");
// 	scanf("%d", &size);

// 	printf("enter with array elements:\n");
// 	for(int i = 0; i < size; i++){
// 		scanf("%d", &arr[i]);
// 	}

// 	revIndex = 0;
// 	arrIndex = size - 1;

// 	while (arrIndex >=0){
// 		reverse[revIndex] = arr[arrIndex];
// 		revIndex++;
// 		arrIndex--;
// 	}
// 	printf("reverse array\n");
// 	for(int k = 0; k < size; k++)
// 		printf("%d\n", reverse[k]);

// 	return 0;
// {
//     int arr[MAX_SIZE], reverse[MAX_SIZE];
//     int size, i, arrIndex, revIndex;

//     /* Input size of the array */
//     printf("Enter size of the array: ");
//     scanf("%d", &size);

//     /* Input array elements */
//     printf("Enter elements in array: ");
//     for(i=0; i<size; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     revIndex = 0;
//     arrIndex = size - 1;
//     while(arrIndex >= 0)
//     {
//         /* Copy value from original array to reverse array */
//         reverse[revIndex] = arr[arrIndex];
        
//         revIndex++;
//         arrIndex--;
//     }

//     /*
//      * Print the reversed array
//      */
//     printf("\nReversed array : ");
//     for(i=0; i<size; i++)
//     {
//         printf("%d\t", reverse[i]);
//     }

//     return 0;
// }
// {
// 	int arr[MAX], size;
// 	printf("Value of array: \n");
// 	scanf("%d", &size);

// 	printf("elements of array:\n");
// 	for (int i = 0; i < size; i++)
// 		scanf("%d", &arr[i]);

// 	// in reverse order

// 	for (int k = size-1; k >=0; k--)
// 		printf("%d\n", arr[k]);

// 	return 0;
// }	