/*

Q12: WAP to read 6 digits and find out if they are in a strictly ascending order.
For example, the sequence 5,6,7,9,11,14 is in strict ascending order
whereas the sequence 5,5,6,7,9,11 is not in a strict ascending order.
Display an appropriate message.

*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int main() {
	int n = 6;
	static int arr[SIZE];
	bool flag = true;
	printf("Enter the elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < n - 1; i++){
		if (arr[i] >= arr[i+1]){
			flag = false;
			break;
		}
	}
	if (flag)
		printf("All elements are in strict ascending order\n");
	else
		printf("All elements are not in strict ascending order\n");
	return 0;
}
