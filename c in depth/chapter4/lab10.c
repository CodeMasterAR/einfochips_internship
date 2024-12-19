/*

Author: Arpit Patel
Date: 18/12/24
Q10: x - x2/2 + x3/3 - x4/4 + x5/5 .............. (log(1+x))

*/

#include  <stdio.h>
#include <stdbool.h>

int main() {
	int i, n;
	bool flag = true;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		if (i == 1) printf(" x ");
		if (flag) {printf(" - (x^%d)/%d", i, i); flag = false;}
		else {printf(" + (x^%d)%d", i, i); flag = true;}
	}
	printf("\n");
	return 0;
}
