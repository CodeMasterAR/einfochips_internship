/*

Author: Arpit Patel
Date: 18/12/24
Q7: 1 + x2/2! + x3/3! + x4/4! + x5/5! .......... (e x)

*/

#include <stdio.h>

int main(){
	int i, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i ++){
		if (i == 1) printf(" 1 +");
		else printf(" (x^%d)/%d! +", i, i);
	}
	printf("\b \n");
	return 0;
}
