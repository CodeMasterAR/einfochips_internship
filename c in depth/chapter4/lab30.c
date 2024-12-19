/*

Q30" Print Pattern

		    1
		  2 3 2
		3 4 5 4 3
	      4 5 6 7 6 5 4
	    5 6 7 8 9 8 7 6 5
	  6 7 8 9 0 1 0 9 8 7 6
	7 8 9 0 1 2 3 2 1 0 9 8 7

*/

#include <stdio.h>

int main() {
	int i, j, k, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		k = i - 1;
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (j = n - i + 1; j <= n; j++)
			printf("%2d", (++k) % 10);
		for (j = n + 1; j < n + i; j++)
			printf("%2d", (--k) % 10);
		printf("\n");
	}
	return 0;
}
