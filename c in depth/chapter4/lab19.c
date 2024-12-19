/*

Author: Arpit Patel
Date: 18/12/24
Q19: Print Pattern

	1
	2 2
	3 3 3
	4 4 4 4
	5 5 5 5 5

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++)
			printf("%2d", i);
		printf("\n");
	}
	return 0;
}
