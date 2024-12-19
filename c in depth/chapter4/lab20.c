/*

Author: Arpit Patel
Date: 18/12/24
Q20: Print Pattern

	*
	* *
	* * *
	* * * *

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++)
			printf("* ");
		printf("\n");
	}
	return 0;
}

