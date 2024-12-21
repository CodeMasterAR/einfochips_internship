/*

Q13: WAP to read a set of height and find out the average height. The
program should then calculate the deviation of each height from the
average. The deviation d, is defined as: d=m(i)-a. Where a represents
the average height, and m(i) represents the height.

*/


#include <stdio.h>

#define SIZE 100

int main(){
	int n, d, sum = 0;
	float a;
	static int arr[SIZE];
	printf("Enter the no of set of height: ");
	scanf("%d", &n);
	printf("Enter the set of height: ");
	for (int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	a = (float)sum/n;
	printf("Average height is %.2f\n", a);
	for (int i = 0; i < n; i++)
		printf("Devision of height%d is %.2f\n", i+1, arr[i] - a);
	return 0;
}
