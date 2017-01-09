#include<iostream>
#include <stdio.h>


void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void selectionSort(int arr[], int n)
{
	int *ptr = arr;
	int i, j, min_idx;
	/*int *p;
	int **value;*/
	// One by one move boundary of unsorted subarray
	for (i = 0; i < n - 1; i++)
	{
		// Find the minimum element in unsorted array
		min_idx = i;
		/*p = &(*(ptr + min_idx));
		value = *p;*/
		for (j = i + 1; j < n; j++)
			if (*(ptr+j) <*(ptr+min_idx))
				min_idx = j;

		//Swap the found minimum element with the first element, who the hell cares!!!!!!!!!!!
		swap(&(*(ptr+min_idx)), &(*(ptr+i)));
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int *ptr = arr;
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", *(arr+i));
	printf("\n");
}

// Driver program to test above functions
int main()
{
	int arr[5];
	int *ptr = arr;
	printf("Hello, dear friend!" "\n" "Please type here elements of your massive" "\n" "and i will sort it, i promise" "\n");
	for (int i = 0; i < 5; i++) {
	printf("arr[%d%s",i,"]= ");
	std::cin>> *(ptr + i);
	}
	int n = sizeof(arr) / sizeof(*ptr);
	selectionSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
