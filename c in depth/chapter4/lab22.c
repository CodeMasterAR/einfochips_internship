/*

Author: Arpit Patel
Date: 18/12/24
Q22: Print Pattern

	9 8 7 6 5 4 3 2 1
	7 6 5 4 3 2 1
	5 4 3 2 1
	3 2 1
	1

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = n; i >= 1; i--){
		for (j = 2*i - 1; j >= 1; j--)
			printf("%2d", j);
		printf("\n");
	}
	return 0;
}
