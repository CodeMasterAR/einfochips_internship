/*

Q57: Write a program to calculate overtime pay of 10 employees. Overtime
is paid at the rate of rs. 12.00 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour.

*/

#include <stdio.h>

int main() {
	int working_hr;
	for(int i = 1; i <= 10; i++){
		printf("Enter the working hour of emp %d: ", i);
		scanf("%d", &working_hr);
		if (working_hr > 40)
			printf("Overtime Pay %d\n", (working_hr - 40)*12);
		else
			printf("Didn't do overtime\n");
	}
	return 0;
}
