/*

Author: Arpit Patel
Date: 16/12/24
Q2: WAP to input two numbers from the keyboard and print their average.

*/

#include <stdio.h>

int main() {
	float num1, num2;
	double avg;
	printf("Enter 2 numbers as (num1, num2): ");
	scanf("%f, %f", &num1, &num2);
	avg = (num1 + num2)/2;
	printf("Average is %.2lf\n", avg);
	return 0;
}
