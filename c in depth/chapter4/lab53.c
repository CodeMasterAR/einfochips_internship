/*

Q53: WAP to compute the perimeter p and area a of a triangle of sides a, b
and c where
p = a+b+c
a = sqrt(s(s-a)(s-b)(s-c))
and 2s = a + b+ c

*/

#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c, s;
	printf("Enter the length of all side of triangle as (a, b, c): ");
	scanf("%f, %f, %f", &a, &b, &c);
	if (a + b > c && b + c > a && a + c > b){
		printf("Perimeter of triangle is %.2f\n", a + b + c);
		s = (a + b + c) / 2;
		printf("Area of triangle is %.2f\n", sqrt(s*(s - a)*(s - b)*(s - c)));
	}
	else
		printf("Side of triangle can't make real triangle\n");
	return 0;
}
