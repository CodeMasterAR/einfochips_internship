/*

Q2: WAP to sort a 1-d array using selection sort or linear sort technique.

*/

#include <stdio.h>
#include <limits.h>

#define SIZE 100

int main() {
	int min, index, n, arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Original arr is ");
	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	printf("Sorted arr is ");

	//Selection sort
	for (int i = 0; i < n; i++){
		min = INT_MAX;
		index = i;
		for (int j = i; j < n; j++){
			if (min > arr[j]){
				min = arr[j];
				index = j;
			}
		}
		if (i != index){
			arr[i] = arr[i] + arr[index];
			arr[index] = arr[i] - arr[index];
			arr[i] = arr[i] - arr[index];
		}
	}
	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	return 0;
}

















