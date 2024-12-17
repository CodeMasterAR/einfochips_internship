/*

Author: Arpit Patel
Date: 16/12/24
Q4: WAP to print the total seconds in a given time (hrs, min, sec’s).

*/

#include <stdio.h>

int main() {
	int hr, min, sec;
	int total_sec;
	printf("Enter (hr, min, sec): ");
	scanf("%d, %d, %d", &hr, &min, &sec);
	total_sec = (hr*3600) + (min*60) + sec;
	printf("total second is %d\n", total_sec);
	return 0;
}
