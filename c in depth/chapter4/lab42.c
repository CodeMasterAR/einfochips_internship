/*

Q42: WAP to count the number of digits in a given number.

*/

#include <stdio.h>

int main() {
	int num, cnt_digit = 0;
	printf("Enter the num: ");
	scanf("%d", &num);
	while (num > 0){
		num = num / 10;
		cnt_digit ++;
	}
	printf("Total no of digit is %d\n", cnt_digit);
	return 0;
}
