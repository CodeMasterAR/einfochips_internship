/*

Author: Arpit Patel
Date: 16/12/24
Q8: WAP to SWAP (interchange) three numbers.

*/

#include <stdio.h>

int main() {
	int num1, num2, num3, temp;
	printf("Enter 3 numbers as (num1, num2, num3): ");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	printf("Before swapping num1 = %d and num2 = %d and num3 = %d\n", num1, num2, num3);
	temp = num3;
	num3 = num2;
	num2 = num1;
	num1 = temp;
	printf("After swapping num1 = %d and num2 = %d and num3 = %d\n", num1, num2, num3);
	return 0;
}
