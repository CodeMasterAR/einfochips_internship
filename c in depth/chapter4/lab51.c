/*

Q51: WAP to read n numbers and count even and odd numbers.

*/

#include <stdio.h>

int main() {
	int n, num, count_even = 0, count_odd = 0;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		scanf("%d", &num);
		if (num % 2 == 0)
			count_even ++;
		else
			count_odd ++;
	}
	printf("Total even numbers are %d and odd numbers are %d\n", count_even, count_odd);
	return 0;
}
