/*

Q8: WAP to delete an element from 1-d sorted array.

*/

#include <stdio.h>

#define SIZE 100

int main(){
	int n, ele, start, end, mid, index = -1;
	static int arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter the elements (sorted manner): ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	printf("Enter the element which you want to delete: ");
	scanf("%d", &ele);
	printf("Original arr: ");
	for (int i = 0; i < n; i++)
		printf(" %d,", arr[i]);
	printf("\b \n");
	start = 0;
	end = n - 1;
	while (start <= end){
		mid = start + (end - start)/2;
		if (arr[mid] < ele)
			start = mid + 1;
		else if (arr[mid] > ele)
			end = mid - 1;
		else {
			index = mid;
			break;
		}
	}
	if (index != -1){
		for (int i = index; i <= n - 1; i++)
			arr[i] = arr[i+1];
		printf("After deletion: ");
		for (int i = 0; i < n; i ++)
			printf(" %d,", arr[i]);
		printf("\b \n");
	}
	else
		printf("Given number is not present in arr\n");
	return 0;
}
