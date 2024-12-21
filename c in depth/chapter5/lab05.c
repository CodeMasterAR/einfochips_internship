/*

Q5: WAP to search an element in 1-d array using binary search method.

*/

#include <stdio.h>

#define SIZE 100

int main(){
	int n, find, start, end, mid, index = -1, arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter elements in sorted manner: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
        printf("Enter the element which you want to find: ");
        scanf("%d", &find);
        start = 0; end = n - 1;
        while (start <= end){
                mid = start + (end - start)/2;
                if (arr[mid] < find)
                        start = mid + 1;
                else if (arr[mid] > find)
                        end = mid - 1;
                else{
                        index = mid;
			break;
		}
        }
        if (index != -1)
                printf("Target element at position %d\n", index);
        else
                printf("Given element is not present in arr\n");
        return 0;
}












