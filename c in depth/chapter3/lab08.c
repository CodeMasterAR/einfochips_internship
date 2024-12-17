/*

Author: Arpit Patel
Date: 17/12/24
Q8: WAP to calculate the grade of a student after the input of marks of that
student.
Percentage >= 90
grade is ‘A’
Percentage >= 70
grade is ‘B’
Percentage >= 50
grade is ‘C’
Percentage < 50
grade is ‘F’

*/

#include <stdio.h>

int main() {
	int percentage;
	printf("Enter the percentage of student: ");
	scanf("%d", &percentage);
	if (percentage >= 90)
		printf("grade is 'A'\n");
	else if (percentage >= 70)
		printf("grade is 'B'\n");
	else if (percentage >= 50)
		printf("grade is 'C'\n");
	else
		printf("grade is 'F'\n");
	return 0;
}
