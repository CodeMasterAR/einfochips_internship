/*

Q4: WAP to search an element in 1-d array using linear search method.

*/

#include <stdio.h>

#define SIZE 100

int main(){
	int n, find, index = -1, arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
        printf("Enter the element which you want to find: ");
        scanf("%d", &find);
        for (int i = 0; i < n; i++){
                if (arr[i] == find){
                        index = i;
                        break;
                }
        }
        if (index != -1)
                printf("Target element at position %d\n", index);
        else
                printf("Given element is not present in arr\n");
	return 0;
}

















