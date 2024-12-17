/*

Author: Arpit Patel
Date: 17/12/24
Q3: WAP to print the maximum out of three numbers.

*/

#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("Enter the 3 numbers (num1, num2, num3): ");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	if ((num1 > num2 && num1 > num3) || (num1 == num2 && num1 > num3) || (num1 == num3 && num2))
		printf("Maximum number is %d\n", num1);
	else if ((num2 > num1 && num2 > num3) || (num2 == num3 && num2 > num1) || (num2 == num1 && num2 > num3))
		printf("Maximum number is %d\n", num2);
	else if ((num3 > num1 && num3 > num2) || (num3 == num1 && num3 > num1) || (num3 == num2 && num3 > num1))
		printf("Maximum number is %d\n", num3);
	else
		printf("All three are equals\n");
	return 0;
}
