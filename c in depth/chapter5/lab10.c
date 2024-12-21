/*

lab10: WAP to find sum of element appearing at even and odd subscript position
of an array of integers.

*/

#include <stdio.h>

#define SIZE 100

int main(){
	int n, sum = 0;
	static int arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Sum of even position: ");
	for (int i = 0; i < n; i+=2)
		sum += arr[i];
	printf("%d\n", sum);
	sum = 0;
	printf("Sum of odd position: ");
	for (int i = 1; i < n; i++)
		sum += arr[i];
	printf("%d\n", sum);
	return 0;
}
