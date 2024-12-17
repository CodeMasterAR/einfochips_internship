/*

Author: Arpit Patel
Date: 17/12/24
Q6: WAP to print the second maximum out of three numbers.

*/

#include <stdio.h>

int main() {
	int num1, num2, num3;
	printf("Enter 3 numbers (num1, num2, num3): ");
	scanf("%d, %d, %d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3)
		printf("Second Max number is %d\n", (num2 >= num3)?(num2):(num3));
	else if (num2 > num1 && num2 > num3)
		printf("Second Max number is %d\n", (num1 >= num3)?(num1):(num3));
	else
		printf("Second Max number is %d\n", (num1 >= num2)?(num1):(num2));
	return 0;
}
