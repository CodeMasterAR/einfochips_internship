/*

Author: Arpit Patel
Date: 18/12/24
Q21: Print pattern

	1
	1 2 3
	1 2 3 4 5
	1 2 3 4 5 6 7

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= 2* i - 1; j++)
			printf("%2d", j);
		printf("\n");
	}
	return 0;
}
