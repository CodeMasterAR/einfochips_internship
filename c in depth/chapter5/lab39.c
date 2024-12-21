/*

Q39: WAP to store any ten numbers in an array and print the LCM and HCF of
all the numbers.

*/

#include <stdio.h>

#define SIZE 10

int main(){
	int n, i, hcf, a, b, temp;
	long long int lcm;
	static int arr[SIZE];
	n = sizeof(arr) / sizeof(arr[0]);
	printf("Enter the 10 elements: ");
	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);
	hcf = lcm = arr[0];
	for (i = 1; i < n; i++){
		a = hcf;
		b = arr[i];
		while(b > 0){
			temp = b;
			b = a % b;
			a = temp;
		}
		hcf = a;
		lcm = (lcm*arr[i])/hcf;
	}
	printf("HCF of all elements is %d\n", hcf);
	printf("LCM of all elements is %lld\n", lcm);
	return 0;
}
