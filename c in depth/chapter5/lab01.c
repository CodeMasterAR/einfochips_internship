/*

Q1: WAP to sort a 1-d array using bubble sort technique.

*/

#include <stdio.h>

#define SIZE 100

int main() {
	int n, arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Original arr is: ");
	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	printf("Sorted arr is: ");

	//Bubble sort
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j+1]){
				arr[j] = arr[j] + arr[j+1];
				arr[j+1] = arr[j] - arr[j+1];
				arr[j] = arr[j] - arr[j+1];
			}
		}
	}

	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	return 0;
}
















