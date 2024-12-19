/*

Q35: WAP to print out all Armstrong numbers between 1 and 500. If sum of
cubes of each digit of the number is equal to the number itself, then the number is
called an Armstrong number. For example,
153=(1*1*1)+(5*5*5)+(3*3*3).if the number is in two digits then we square
the digit of the number.

*/

#include <stdio.h>

int main() {
	int num = 1, sum, val;
	while (num <= 500){
		sum = 0;
		val = num;
		while (val > 0){
			sum += (val % 10)*(val % 10)*(val % 10);
			val = val / 10;
		}
		if (num == sum)
			printf("%3d is Armstrong Number\n", num);
		num ++;
	}
	return 0;
}
