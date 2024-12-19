/*

Author: Arpit Patel
Date: 18/12/24
Q17: Print pattern

	1 2 3 4 5
	1 2 3 4
	1 2 3
	1 2
	1

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n - i + 1; j++)
			printf("%2d", j);
		printf("\n");
	}
	return 0;
}
