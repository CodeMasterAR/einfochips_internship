/*

Author: Arpit Patel
Date: 14/12/24
Q2: WAP to merge three number. E.g. a= 1, b= 2, c = 8 is 128.

*/

#include <stdio.h>

int main() {
	int a, b, c;
	int num = 0;
	printf("Enter the value (a, b, c): ");
	scanf("%d, %d, %d", &a, &b, &c);
	num = num*10 + a;
	num = num*10 + b;
	num = num*10 + c;
	printf("Final number is %d\n", num);
	return 0;
}
