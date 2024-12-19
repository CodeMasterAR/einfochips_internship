/*

Q49: Print the sum of following series.
1+1/2+1/3+1/4......+1/n

*/

#include <stdio.h>

int main() {
	int n;
	float sum = 0;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (float i = 1; i <= n; i++)
		sum += 1/i;
	printf("Sum of %d term is %.2f\n", n, sum);
	return 0;
}
