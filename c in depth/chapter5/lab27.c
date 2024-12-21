/*

Q27: WAP to send all the negative elements of an array to the end without
altering the original sequence. for e.g. If array contains 5 -3 2 6 8 -4 7 -6 9
-1 then the resultant array should be 5 2 6 8 7 9 -3 -4 -6 -1 .you may use
two arrays.

*/

#include <stdio.h>

#define SIZE 10

int main() {
	static int arr1[SIZE] = {5, -3, 2, 6, 8, -4, 7, -6, 9, -1};
	static int arr2[SIZE];
	int n = sizeof(arr1)/4, i, j = -1, k = 0;
	printf("Original Arr: ");
	for (i = 0; i < n; i++)
		printf(" %d,", arr1[i]);
	printf("\b \n");
	i = 0;
	while (i < n){
		if (arr1[i] > 0){
			i++;
			//printf("I can reach here\n");
		}
		else {
			(j == -1) ? (j = i) : 0;
			//printf("I can still running\n");
			while (i < n && arr1[i] < 0){
				//printf("Started nested while1\n");
				arr2[k++] = arr1[i++];
				//printf("Completed nested while1\n");
			}
			while (i < n && arr1[i] >= 0){
				arr1[j] = arr1[i];
				i++;
				j++;
				//printf("Completed nested while2\n");
			}
		}
	}
	k = 0;
	for (; j < n; j++)
		arr1[j] = arr2[k++];
	printf("After operation: ");
	for (i = 0; i < n; i++)
		printf(" %d,", arr1[i]);
	printf("\b \n");
	return 0;
}
