/*

Q56: WAP to calculate net pay of n employees. Net pay is basic + da + hra
cca - pf (da is 39% of the basic, hra is 15% of basic less than or equal to rs
8000/- and 30% of the basic above rs 8000, cca is fixed
to rs 800 and pf deduction is rs 600).

*/

#include <stdio.h>

int main() {
	int n, basic;
	float da, hra;
	const int caa = 800, pf = 600;
	printf("Enter the no of emp: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		printf("Enter the basic salary of emp %d: ", i);
		scanf("%d", &basic);
		da = 39*basic/100;
		hra = (basic <= 8000 ? (15*basic/100) : (30*basic/100));
		printf("Net Pay for emp %d is %.2f: \n", i, basic + da + hra + caa - pf);
	}
	return 0;
}





