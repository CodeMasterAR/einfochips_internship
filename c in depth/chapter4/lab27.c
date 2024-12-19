/*

Author: Arpit Patel
Date: 18/12/24
Q27: Print Pattern

	      *
	    * * *
	  * * * * *
	* * * * * * *
	  * * * * *
	    * * *
	      *

*/

#include <stdio.h>

int main() {
	int i, j, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n + i - 1; j++){
			if (j >= n - i + 1)
				printf(" *");
			else printf("  ");
		}
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--){
		for (j = 1; j <= n + i - 1; j++){
			if (j > n - i)
				printf(" *");
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}