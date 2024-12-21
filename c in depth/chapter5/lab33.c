/*

Q33: WAP that will read an array, replaces multiple occurrence of any element
by 0 and then display the resultant array. For eg. If input is 1 1 2 2 3 4 2 1 5
4 output is 1 0 2 0 3 4 0 0 5 0 .

*/

#include <stdio.h>

#define SIZE 10

int main(){
	int n, i, j, k, found;
	static int arr[SIZE] = {1, 1, 2, 2, 3, 4, 2, 1, 5, 4};
	static int duplicates[SIZE];
	n = sizeof(arr)/4;
	printf("Original Arr: ");
	for (i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	for (i = 0, k = 0; i < n; i++){
		found = 0;
		for (j = 0; j < k; j++){
			if (arr[i] == duplicates[j]){
				found = 1;
				arr[i] = 0;
			}
		}
		if (found == 0){
			duplicates[k++] = arr[i];
		}
	}
	printf("After Operation: ");
	for (i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	return 0;
}
