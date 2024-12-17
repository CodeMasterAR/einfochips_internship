/*

Author: Arpit Patel
Date: 17/12/24
Q4: Compute the gross salary of Mr. HARISH. Input his basic salary. His DA is
40% of basic salary, and HRA is 20% of basic salary.

*/

#include <stdio.h>

int main() {
	int gross_salary;
	int basic_salary, da, hra;
	printf("Enter the basic salary: ");
	scanf("%d", &basic_salary);
	da = 40 * basic_salary / 100;
	hra = 20 * basic_salary / 100;
	gross_salary = basic_salary + da + hra;
	printf("Gross Salary is %d\n", gross_salary);
	return 0;
}
