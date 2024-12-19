/*

Q41: According to a study, the approximate level of intelligence of a
person can be calculated using the following formula:
i=2+(y+0.5 x)
WAP, which will produce a table of values of i, y and x, where y varies from 1
to 6 , and for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.

*/

#include <stdio.h>

int main() {
	int i, y;
	float x;
	for (y = 1; y <= 6; y++){
		printf("Table for y = %2d\n", y);
		for (x = 5.5; x <= 12.5; x += 0.5)
			printf("y = %2d & x = %2.1f i = %2.1f\n",y, x, 2+(y + 0.5*x));
		printf("\n");
	}
	return 0;
}
