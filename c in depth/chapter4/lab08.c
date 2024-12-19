/*

Author: Arpit Patel
Date: 18/12/24
Q8: x - x3/3! + x5/5! - x7/7! + x9/9! .......... (sinx)

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	int i, n;
	bool flag = true;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i += 2){
		if (i == 1) printf(" x ");
		if (flag) {printf(" - (x^%d)/%d!", i, i); flag = false;}
		else {printf(" + (x^%d)/%d!", i, i); flag = true;}
	}
	printf("\n");
	return 0;
}
