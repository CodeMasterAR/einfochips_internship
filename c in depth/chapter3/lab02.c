/*

Author: Arpit Patel
Date: 17/12/24
Q2: WAP to print the maximum out of two numbers.

*/

#include <stdio.h>

int main() {
	int num1, num2;
	printf("Enter 2 numbers (num1, num2): ");
	scanf("%d, %d", &num1, &num2);
	if (num1 > num2)
		printf("Max number is %d\n", num1);
	else if (num2 > num1)
		printf("Max number is %d\n", num2);
	else
		printf("Both are equal\n");
	return 0;
}
