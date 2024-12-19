/*

Author: Arpit Patel
Date: 18/12/24
Q2: 2, 4, 6, 8, 10, ........

*/

#include <stdio.h>

int main() {
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for(i = 2; i <= n; i += 2)
		printf(" %d,", i);
	printf("\b \b \n");
	return 0;
}
