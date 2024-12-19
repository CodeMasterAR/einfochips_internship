/*

Q31: Print Pattern

	   	a
	      a b a
	    a b c b a
	  a b c d c b a
	a b c d e d c b a

*/

#include <stdio.h>

int main() {
	int i, j, k, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		k = 0;
		for (j = 1; j <= n - i; j++)
			printf("  ");
		for (j = n - i + 1; j <= n; j++)
			printf("%2c", (char)(96 + ((++k)%26)));
		for (j = n + 1; j <= n + i - 1; j ++)
			printf("%2c", (char)(96 + ((--k)%26)));
		printf("\n");
	}
	return 0;
}
