/*

Q6: WAP to insert an element in 1-d sorted array.

*/
#include <stdio.h>

#define SIZE 100

int main(){
	int n, new_ele, index, arr[SIZE];
	printf("Enter the no of ele: ");
	scanf("%d", &n);
	printf("Enter elements in sorted manner: ");
	for (int i = 0; i < n; i++)
		scanf("%d", &arr[i]);
        printf("Enter the element which you want to insert: ");
        scanf("%d", &new_ele);
        index = n;
        while (new_ele < arr[index - 1]){
                arr[index] = arr[index - 1];
                index --;
        }
        arr[index] = new_ele;
        for (int i = 0; i <= n; i++)
                printf(" %d,", arr[i]);
        printf("\b \n");
        return 0;
}
