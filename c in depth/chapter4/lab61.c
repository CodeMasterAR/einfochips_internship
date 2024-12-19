/*

Q61: WAP to input the marks of n students and count the number of students
who have obtained a, b, c,d and f grades. The grades are awarded according to
the following rules.
Marks	Grade
>= 80	A
>= 70	B
>= 60	C
>= 50	D
< 50	F

*/

#include <stdio.h>

int main() {
	int n, marks, count_a = 0, count_b = 0, count_c = 0, count_d = 0, count_f = 0;
	char grade;
	printf("Enter the no of student: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		printf("Enter the marks of student %d: ", i);
		scanf("%d", &marks);
		if (marks >= 80){
			grade = 'A';
			count_a ++;
		}
		else if (marks >= 70){
			grade = 'B';
			count_b ++;
		}
		else if (marks >= 60){
			grade = 'C';
			count_c ++;
		}
		else if (marks >= 50){
			grade = 'D';
			count_d ++;
		}
		else{
			grade = 'F';
			count_f ++;
		}
	}
	printf("\nCount\nStudent with grade A: %d\nStudent with grade B: %d\nStudent with grade C: %d\nStudent with grade D: %d\nStudent with grade F: %d\n", count_a, count_b, count_c, count_d, count_f);
	return 0;
}












