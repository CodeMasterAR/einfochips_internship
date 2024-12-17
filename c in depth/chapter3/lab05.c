/*

Author: Arpit Patel
Date: 17/12/24
Q5: WAP to print the maximum out of four numbers. (Short logic)

*/

#include <stdio.h>

int main(){
	int num1, num2, num3, num4, max;
	printf("Enter 4 numbers (num1, num2, num3, num4): ");
	scanf("%d, %d, %d, %d", &num1, &num2, &num3, &num4);
	max = num1 >= num2 ? num1 : num2;
	max = max >= num3 ? max : num3;
	max = max >= num4 ? max : num4;
	printf("Maximum number is %d\n", max);
	return 0;
}
