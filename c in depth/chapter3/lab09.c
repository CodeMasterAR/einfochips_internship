/*

Author: Arpit Patel
Date: 17/12/24
Q9: WAP to compute the tel. bill of a customer. Montly Rental Rs.100. Rates are as follows.

No of calls 1 to 100	rate = 0.0
No of calls 101 to 200	rate = 0.8
No of calls 201 to 500	rate = 1.0
No of calls 501 to --	rate = 1.2

*/

#include <stdio.h>

int main() {
	const int rental = 100;
	int no_of_calls;
	float bill;
	printf("Enter the no of calls: ");
	scanf("%d", &no_of_calls);
	if (no_of_calls <= 100)
		bill = rental;
	else if (no_of_calls <= 200)
		bill = rental + (no_of_calls - 100)*0.8;
	else if (no_of_calls <= 500)
		bill = rental + (100*0.8) + (no_of_calls - 200)*1.0;
	else
		bill = rental + (100*0.8) + (300*1.0) + (no_of_calls - 500)*1.2;
	printf("final bill for %d call is RS. %.2f\n", no_of_calls, bill);
	return 0;
}
