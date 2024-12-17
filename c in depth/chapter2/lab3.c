/*

Author: Arpit Patel
Date: 17/12/24
Q3: WAP to print the reverse of a 3 digit number.

*/

#include <stdio.h>

int main() {
	int num = 234, reverse;
	int hundreds, tens, units;
	hundreds = num/100;
	tens = (num % 100)/10;
	units = num % 10;
	reverse = (units*100) + (tens*10) + hundreds;
	printf("Reverse of %d is %d\n", num, reverse);
	return 0;
}
