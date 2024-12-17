/*

Author: Arpit Patel
Date: 16/12/24
Q10: WAP to calculate the remainder of 2 numbers without using % operator.

*/

#include <stdio.h>

int main() {
	int dividend, divisor, reminder;
	printf("Enter 2 numbers as (dividend, divisor): ");
	scanf("%d, %d", &dividend, &divisor);
	if (divisor > dividend) 
		printf("Reminder is %d\n", dividend);
	else {
		while (divisor <= dividend - divisor)
			dividend = dividend - divisor;
		reminder = dividend - divisor;
		printf("Reminder is %d\n", reminder);
	}
	return 0;
}
