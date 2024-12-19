/*

Q38: WAP to add first seven terms of the following series using for loop:1/1!+2/2!+3/3!+......

*/

#include <stdio.h>

int main(){
	int i = 1;
	for (; i <= 7; i++)
		printf(" %d/(%d!) +", i, i);
	printf("\b \n");
	return 0;
}
