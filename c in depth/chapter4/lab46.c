/*

Q46: WAP to find the sum of first n prime numbers.

*/

#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
	int n, num = 2, sum = 0, count = 0;
	bool flag;
	printf("Enter the val of n: ");
	scanf("%d", &n);
	while (n > 0){
		flag = true;
		for (int i = 2; i <= sqrt(num); i++){
			if (num % i == 0){
				flag = false;
				break;
			}
		}
		if (flag){
		 	count++;
			n--;
			sum += num;
		}
		num ++;
	}
	printf("Sum of first %d prime val is %d\n", count, sum);
	return 0;
}

