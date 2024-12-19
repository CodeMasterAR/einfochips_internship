/*

Author: Arpit Patel
Date: 18/12/24
Q9: 1 - x2/2! + x4/4! - x6/6! + x8/8! .......... (cosx)

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	int i, n;
	bool flag = true;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 0; i <= n; i += 2) {
		if (i == 0) printf(" 1 ");
		if (flag) {printf(" - (x^%d)/%d!", i, i); flag = false;}
		else {printf(" + (x^%d)/%d!", i, i); flag = true;}
	}
	printf("\n");
	return 0;
}
