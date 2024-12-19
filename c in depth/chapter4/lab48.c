/*

Q48: Print the sum of following series.
1 x 2 + 2 x 3 + 3 x 4 + 4 x 5 + ....... + (n-1) x n.

*/

#include <stdio.h>

int main() {
	int n, sum = 0;
	printf("enter the val of n: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++)
		sum += i*(i+1);
	printf("Sum of %d term is %d\n", n - 1, sum);
	return 0;
}
