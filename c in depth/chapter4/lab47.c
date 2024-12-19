/*

Q47: WAP to determine whether a specified value is prime or not in a
given sequence of values. The sequence of values to be read from the input is
terminated by 0.

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	int num;
	bool flag;
	printf("Enter numbers (terminate by 0): \n");
	while (1){
		flag = true;
		scanf("%d", &num);
		if (num == 0)
			break;
		for (int i = 2; i <= sqrt(num); i++){
			if (num % i == 0){
				flag = false;
				break;
			}
		}
		if (flag)
			printf("It is prime\n");
		else
			printf("It is not prime\n");
	}
	return 0;
}
