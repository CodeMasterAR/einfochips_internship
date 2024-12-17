/*

Author: Arpit Patel
Date: 17/12/24
Q7: WAP to check whether a year is leap year or not.

*/

#include <stdio.h>

int main() {
	int year;
	printf("Enter year: ");
	scanf("%d", &year);
	((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("%d year is leap year\n", year) : printf("%d year is not leap year\n", year);
	return 0;
}
