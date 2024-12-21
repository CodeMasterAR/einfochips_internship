/*

Q11: WAP to find maximum and the minimum values from a set of values stored
in an array, along with their positions in the array.

*/

#include <stdio.h>
#include <limits.h>
#define SIZE 100

int main (){
	int n, min = INT_MAX, max = INT_MIN, position_min = -1, position_max = -1;
	static int arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n; i++){
		if (max < arr[i]){
			max = arr[i];
			position_max = i+1;
		}
		if (min > arr[i]){
			min = arr[i];
			position_min = i+1;
		}
	}
	printf("Max element %d at position %d\n", max, position_max);
	printf("Min element %d at position %d\n", min, position_min);
	return 0;
}
