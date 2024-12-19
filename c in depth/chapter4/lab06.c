/*

Author: Arpit Patel
Date: 18/12/24
Q6: 1, 1, 2, 4, 7, 13, 24, ... (Lucas series)

*/

#include <stdio.h>

int main() {
	int i, a = 0, b, c, n, temp;
	b = c = 1;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i ++){
		if (i < 3)  printf(" 1,");
		else {
			printf(" %d,", a + b + c);
			temp = a;
			a = b;
			b = c;
			c = a + b + temp;
		}
	}
	printf("\b \n");
	return 0;
}












