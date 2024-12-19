/*

Q36: WAP to print all prime numbers from 1 to 300.

*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main() {
	int i, num = 2;
	bool flag;
	while(num <= 300){
		flag = true;
		for (i = 2; i <= sqrt(num); i++){
			if (num % i == 0){
				flag = false;
			}
		}
		if (flag)
			printf("%3d is prime number\n", num);
		num ++;
	}
	return 0;
}
