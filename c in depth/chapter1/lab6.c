/*

Author: Arpit Patel
Date: 16/12/24
Q6: WAP to SWAP (interchange) two numbers.

*/

#include <stdio.h>

int main() {
	int num1, num2, temp;
	printf("Enter 2 numbers as (num1, num2): ");
	scanf("%d, %d", &num1, &num2);
	printf("Before swapping num1 = %d and num2 = %d\n", num1, num2);
	temp = num1;
	num1 = num2;
	num2 = temp;
	printf("After swapping num1 = %d and num2 = %d\n", num1, num2);
	return 0;
}
