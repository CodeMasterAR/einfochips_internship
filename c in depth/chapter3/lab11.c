/*

Author: Arpit Patel
Date: 17/12/24
Q11: WAP to check whether a 3 digit number is a magic number or not.
(Palindrome) A number is a magic number if its reverse is same as the
original number.

*/

#include <stdio.h>

int main() {
	int num = 454;
	int hundreds = num / 100;
	int units = num % 10;
	(hundreds == units) ? printf("It is magic number\n") : printf("It is not magic number\n");
	return 0;
}
