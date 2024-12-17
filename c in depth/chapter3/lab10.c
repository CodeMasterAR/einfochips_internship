/*

Author: Arpit Patel
Date: 17/12/24
Q10: WAP to compute the pension of an employee.
If the person is male.
Age >= 90  	pension is 4000
Age >= 60	pension is 6000
Age < 60	pension is 0

if the person is female.
Age >= 90	pension is 3000
Age >= 60	pension is 5000
Age < 60	pension is 0

*/

#include <stdio.h>

int main() {
	char gender;
	int age, pension;
	printf("Enter the gender of employee(M or F): ");
	scanf("%c", &gender);
	printf("Enter the age of employee: ");
	scanf("%d", &age);
	switch(gender){
		case 'M': if (age >= 90) pension = 4000;
			else if (age >= 60) pension = 6000;
			else pension = 0;
			break;
		case 'F': if (age >= 90) pension = 3000;
			else if (age >= 60) pension = 5000;
			else pension = 0;
			break;
	}
	printf("Pension is %d\n", pension);
	return 0;
}
