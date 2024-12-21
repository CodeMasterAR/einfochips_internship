/*

Q42: WAP which accepts a positive decimal integers input from the keyboard
converts the integer into its binary equivalent and outputs the integer with
its binary equivalent.

*/

#include <stdio.h>

#define SIZE 16

void main(){
	int n, a, r, num, binary[SIZE];
	n = sizeof(binary)/sizeof(binary[0]);
	printf("Enter the num: ");
	scanf("%d", &num);
	for (int i = 15; i >= 0; i--){
		a = 1<<i;
		r = num & a;
		if (r == 0)
			binary[n-i-1] = 0;
		else
			binary[n-i-1] = 1;
	}
	printf("Binary value of num is: ");
	for (int i = 0; i < n; i++)
		printf("%d", binary[i]);
	printf("\n");
}
