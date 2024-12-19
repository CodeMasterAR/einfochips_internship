/*

Author: Arpit Patel
Date: 18/12/24
Q12: WAP to calculate the factorial of n.

*/

#include <stdio.h>

int main() {
	int i, n, fact = 1;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		fact *= i;
	printf("Factorial of %d is %d\n", n, fact);
	return 0;
}
