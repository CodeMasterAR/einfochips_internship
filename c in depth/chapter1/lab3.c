/*

Author: Arpit Patel
Date: 16/12/24
Q3: WAP to calculate the area of a circle.

*/

#include <stdio.h>

int main() {
	int radius;
	const double pi = 3.14;
	double area;
	printf("Enter the radius of circle: ");
	scanf("%d", &radius);
	area = pi*radius*radius ;
	printf("Area is %.2lf\n", area);
	return 0;
}
