/*

Q9: WAP that will read an array of integers and print even and odd element
separately.

*/

#include <stdio.h>

#define SIZE 100

int main() {
	int n;
	static int arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Even Elements: ");
	for (int i = 0; i < n; i++)
		(arr[i] % 2 == 0) ? printf(" %d,", arr[i]) : 0;
	printf("\b \n");
	printf("Odd Elements: ");
	for (int i = 0; i < n; i++)
		(arr[i] % 2 != 0) ? printf(" %d,", arr[i]) : 0;
	printf("\b \n");
	return 0;
}
