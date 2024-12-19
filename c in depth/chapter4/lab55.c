/*

Q55: WAP to print the sum of n numbers , sum of squares of first n even
numbers and sum of the cube of first n odd numbers.

*/

#include <stdio.h>
#include <math.h>

int main(){
	int n, i, sum = 0, sum_of_square = 0, sum_of_cube = 0;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		sum += i;
		sum_of_square += pow(2*i,2);
		sum_of_cube += pow(((2*i) - 1),3);
	}
	printf("Sum of first %d term is %d\nSum of square of even term is %d\nSum of cube of odd term is %d\n", n, sum, sum_of_square, sum_of_cube);
	return 0;
}
