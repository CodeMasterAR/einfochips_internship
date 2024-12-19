/*

Author: Arpit Patel
Date: 18/12/24
Q13: WAP to calculate the power p of a number n.

*/

#include <stdio.h>

int main() {
	int i, n, p, pow = 1;
	printf("Enter the val and power as (n, p): ");
	scanf("%d, %d", &n, &p);
	for (i = 1; i <= p; i++)
		pow *= n;
	printf("Power of %d is %d\n", n, pow);
	return 0;
} 
