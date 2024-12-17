/*

Author: Arpit Patel
Date: 16/12/24
Q1: WAP to input two numbers from the keyboard and print their sum.

*/

#include <stdio.h>

int main() {
	int number1, number2;
	int sum;
	printf("Enter 2 numbers as (number1, number2): ");
	scanf("%d, %d", &number1, &number2);
	sum = number1 + number2;
	printf("Sum is %d\n", sum);
	return 0;
}
