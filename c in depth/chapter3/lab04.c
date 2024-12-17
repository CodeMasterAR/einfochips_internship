/*

Author:Arpit Patel
Date: 17/12/24
Q4: WAP to print the maximum out of four numbers.

*/

#include <stdio.h>

int max(int num1, int num2){
        if (num1 >= num2)
                return num1;
        else
                return num2;
}


int main() {
	int num1, num2, num3, num4;
	int max1, max2;
	printf("Enter 4 numbers (num1, num2, num3, num4): ");
	scanf("%d, %d, %d, %d", &num1, &num2, &num3, &num4);
	max1 = max(num1, num2);
	max2 = max(num3, num4);
	printf("Maximum number is %d\n", max(max1, max2));
	return 0;
}
