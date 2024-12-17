/*

Author: Arpit Patel
Date: 16/12/24
Q5: WAP to convert temp. From Fahrenheit to centigrade. C=(F-32) * 5/9

*/

#include <stdio.h>

int main() {
	float fehr;
	double cels;
	printf("Enter temperature in fehrenhit: ");
	scanf("%f", &fehr);
	cels = 5*(fehr - 32)/9;
	printf("Temperature in %.2lf\n", cels);
	return 0;
}
