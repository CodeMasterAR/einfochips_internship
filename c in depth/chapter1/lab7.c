/*

Author: Arpit Patel
Date: 16/12/24
Q7: WAP to SWAP (interchange) 2 numbers without using third variable.

*/

#include <stdio.h>

int main() {
	int num1, num2;
	printf("Enter 2 numbers as (num1, num2): ");
	scanf("%d, %d", &num1, &num2);
	printf("Before swapping num1 = %d and num2 = %d\n", num1, num2);
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("After swapping num1 = %d and num2 = %d\n", num1, num2);
	return 0;
}
