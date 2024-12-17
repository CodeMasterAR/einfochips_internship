/*

Author: Arpit Patel
Date: 17/12/24
Q13: Any character is entered through the keyboard, WAP to determine whether
the character entered is a capital letter, a small case letter, a digit or a
special symbol.

*/

#include <stdio.h>

int main() {
	char ch;
	printf("Enter the character: ");
	scanf("%c", &ch);
	if (ch >= 'A' && ch <= 'Z')
		printf("Character is Capital letter\n");
	else if (ch >= 'a' && ch <= 'z')
		printf("Chatacter is Small letter\n");
	else if (ch >= '0' && ch <= '9')
		printf("Character is digit\n");
	else
		printf("Character is special symbol\n");
	return 0;
}
