/*

Q37: WAP to fill the entire screen with a smiling face. The smiling face has
an ASCII value 1.

*/

#include <stdio.h>

int main() {
	int row = 40, col = 50;
	char simle = 1;
	for (int i = 1; i <= row; i++){
		for (int j = 1; j <= col; j++)
			printf("%c", simle);
		printf("\n");
	}
	return 0;
}
