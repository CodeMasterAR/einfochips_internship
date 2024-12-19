/*

Author: Arpit Patel
Date: 18/12/24
Q25: Print Pattern

		1
	      1 2 1
	    1 2 3 2 1
	  1 2 3 4 3 2 1
	1 2 3 4 5 4 3 2 1

*/

#include <stdio.h>

int main(){
	int i, j, k, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n + i - 1; j++){
			if (j >= n - i + 1){
				for (k = 1; k <= i; k ++, j++)
					printf("%2d", k);
				for (k = i - 1; k >= 1; k--, j++)
					printf("%2d", k);
			}
			else printf("  ");
		}
		printf("\n");
	}
	return 0;
}
