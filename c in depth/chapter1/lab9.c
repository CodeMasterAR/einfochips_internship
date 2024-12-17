/*

Author: Arpit Patel
Date: 16/12/24
Q9: WAP to SWAP three numbers without using fourth variable.

*/

#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("Enter 3 numbers as (num1, num2, num3): ");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	printf("Swapping before num1 = %d and num2 = %d and num3 = %d\n", num1, num2, num3);
	num2 = num2 + num3;
	num3 = num2 - num3;
	num2 = num2 - num3;
	num1 = num1 + num2;
	num2 = num1 - num2;
	num1 = num1 - num2;
	printf("After swapping num1 = %d and num2 = %d and num3 = %d\n", num1, num2, num3);
	return 0;
}
