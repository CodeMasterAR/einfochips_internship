/*

Q19: WAP that will read an array of integers. after reading array, the program
should check if there any duplicate value in the array. The program should
display the appropriate message.

*/

#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int main(){
	int n, found, i, j, k;
	bool flag = false;
	static int arr[SIZE] = {23, 34, 12, 54, 41};
	static int duplicate[SIZE];
	n = sizeof(arr)/2;
	for (i = 0, k = 0; i < n; i++){
		found = 0;
		for (j = 0; j < k; j++){
			if (arr[i] == duplicate[j]){
				found = 1;
				break;
			}
		}
		if (found == 0){
			duplicate[k] = arr[i];
		}
		else{
			flag = true;
			break;
		}
	}
	if (flag)
		printf("Yes, there is duplicate value in arr\n");
	else
		printf("No, there is not any duplicate value in arr\n");
	return 0;
}
