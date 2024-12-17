/*

Author: Arpit Patel
Date: 17/12/24
Q1: WAP to calculate the sum of digits of a three digit number e.g. 125 is 8

*/

#include <stdio.h>

int main() {
	int num = 125, sum= 0;
	sum = (num / 100) + ((num % 100) / 10) + (num % 10);
	printf("Sum is %d\n", sum);
	return 0;
}
