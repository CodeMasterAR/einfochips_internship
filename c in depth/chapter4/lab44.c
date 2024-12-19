/* 

Q44: WAP to check whether a given number is palindrome or not.

*/

#include <stdio.h>

int main() {
	int num, digit, original_num, reverse_num = 0;
	printf("Enter the num: ");
	scanf("%d", &num);
	original_num = num;
	while (num > 0){
		digit = num % 10;
		reverse_num = (reverse_num*10) + digit;
		num /= 10;
	}
	if (original_num == reverse_num)
		printf("is palindrome\n");
	else
		printf("is not palindrome\n");
	return 0;
}
