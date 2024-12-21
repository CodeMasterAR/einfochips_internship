/*

Q34: WAP to shift multiple occurrence of element in the following manner. for
eg. If input is 1 1 2 2 3 4 2 1 5 4 output is 1 2 3 4 5 0 0 0 0 0 .

*/

#include <stdio.h>

#define SIZE 10

int main() {
	int n, i, j, k, found;
	static int arr[SIZE] = {1, 1, 2, 2, 3, 4, 2, 1, 5, 4}, duplicates[SIZE];
	n = sizeof(arr)/4;
	printf("Original ARR: ");
	for (i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	for (i = 0, k = 0; i < n; i++){
		found = 0;
		for (j = 0; j < k; j++){
			if (arr[i] == duplicates[j]){
				found = 1;
				break;
			}
		}
		if (found == 0)
			duplicates[k++] = arr[i];
	}
	printf("After Operation: ");
	for (i = 0; i < n; i++)
		printf(" %d,", duplicates[i]);
	printf("\b \n");
	return 0;
}
