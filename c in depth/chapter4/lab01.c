/*

Author: Arpit Patel
Date: 18/12/24
Q1: 1, 3, 5, 7, 9, .........

*/

#include <stdio.h>

int main() {
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2)
		printf("%2d,", i);
	printf("\b \n");
	return 0;
}
