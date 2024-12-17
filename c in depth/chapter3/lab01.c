/*

Author: Arpit Patel
Date: 17/12/24
Q1: WAP to check whether a number input through the keyboard is even or odd.

*/

#include <stdio.h>

int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	if (num % 2 == 0)
		printf("Even Number\n");
	else
		printf("Odd Number\n");
	return 0;
}
