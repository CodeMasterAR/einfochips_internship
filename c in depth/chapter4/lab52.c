/*

Q52: WAP to compute the volume (4/3pir^3) and surface area (4pir^2) of asphere of any radius r.

*/

#include <stdio.h>
#include <math.h>

int main() {
	int r;
	const float pi = 3.14;
	printf("Enter the val of r: ");
	scanf("%d", &r);
	printf("Volume of sphere is %.2f\n", (4*pi*pow(r,3))/3);
	printf("Surface area of sphere is %.2f\n", (4*pi*pow(r,2)));
	return 0;
}
