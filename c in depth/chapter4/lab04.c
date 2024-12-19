/*

Author: Arpit Patel
Date: 18/12/24
Q4: 1, 8, 27, 64, 125, .....

*/

#include <stdio.h>

int main() {
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i ++)
		printf(" %d,", i*i*i);
	printf("\b \n");
	return 0;
}
