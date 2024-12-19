/*

Q43: WAP to print the sum of all the digits of a given number.

*/

#include <stdio.h>

int main() {
	int num, sum = 0;
	printf("Enter the num: ");
	scanf("%d", &num);
	while (num > 0){
		sum += num % 10;
		num /= 10;
	}
	printf("Sum of all digit is %d\n", sum);
	return 0;
}
