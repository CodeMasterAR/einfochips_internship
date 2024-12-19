/*

Q40: WAP to print all the prime numbers between two given numbers.

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void findPrimes(int num1, int num2){
	bool flag;
	for (int num = num1; num <= num2; num++){
		flag = true;
		for (int i = 2; i <= sqrt(num); i++){
			if (num % i == 0){
				flag = false;
				break;
			}
		}
		if (flag)
			printf("%d is prime number\n", num);
	}
}

int main() {
	int num1, num2;
	bool flag;
	printf("Enter 2 numbers as (num1, num2): ");
	scanf("%d, %d", &num1, &num2);
	if (num1 < num2)
		findPrimes(num1, num2);
	else
		findPrimes(num2, num1);
	return 0;
}
















