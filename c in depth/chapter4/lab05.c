/*

Author: Arpit Patel
Date: 18/12/24
Q5: 1, -1, 1, -1, 1, ......

*/

#include <stdio.h>

int main() {
	int i, n;
	int val = -1;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
		printf(" %d,", val *= -1);
	printf("\b \n");
	return 0;
}
