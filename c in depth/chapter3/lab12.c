/*

Author: Arpit Patel
Date: 17/12/24
Q12: Any year is entered through the keyboard, WAP to determine the year is
leap or not. Use the logical operators && and ||.

*/

#include <stdio.h>

int main() {
	int year;
	printf("Enter the year: ");
	scanf("%d", &year);
	((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? printf("%d year is leap year\n", year) : printf("%d year is not leap year\n", year);
	return 0;
}
