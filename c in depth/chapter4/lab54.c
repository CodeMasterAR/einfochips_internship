/*

Q54: WAP to read a positive integer and determine and print its binary
equivalent.

*/

#include <stdio.h>

int main(){
	int num, a, r;
	printf("Enter the val of num: ");
	scanf("%d", &num);
	if (num > 0){
		for (int i = 15; i >= 0; i--){
			if (i == 7)
				printf(" ");
			a = 1<<i;
			r = num&a;
			if (r == 0)
				printf("0");
			else
				printf("1");
		}
		printf("\n");
	}
	else
		printf("Please enter positive number\n");
	return 0;
}
