/*

Q7: WAP to delete an element from 1-d array(unsorted) from the given position.

*/

#include <stdio.h>

#define SIZE 100

int main(){
	int n, index;
	static int arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Original arr: ");
	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	printf("Enter the position from where you want to delete: ");
	scanf("%d", &index);
	for (int i = index; i <= n - 1; i++)
		arr[i] = arr[i+1];
	printf("After deletion: ");
	for (int i = 0; i < n - 1; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	return 0;
}
