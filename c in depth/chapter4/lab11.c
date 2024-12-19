/*

Author: Arpit Patel
Date: 18/12/24
Q11: WAP to print the table of n.

*/

#include <stdio.h>

int main() {
	int i, n;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= 10; i++)
		printf("%2d * %2d = %2d\n", n, i, n*i);
	return 0;
}
