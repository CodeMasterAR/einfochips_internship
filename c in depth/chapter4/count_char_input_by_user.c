#include <stdio.h>

int main() {
	char ch;
	int count = 0;
	printf("Enter the sentence: ");
	while ((ch = getchar()) != '\n'){
		count ++;
	}
	printf("Total no of char is %d\n", count);
	return 0;
}
