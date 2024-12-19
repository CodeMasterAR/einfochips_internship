/*

Q45: WAP to count all the vowels, consonants, digits, spaces, special
symbols from a given text typed by the user, terminated by the enter key.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
	char ch;
	int cnt_vowels = 0, cnt_consonants = 0, cnt_digits = 0, cnt_spaces = 0, cnt_special_sym = 0;
	printf("Enter a string (terminated by Enter Key): \n");
	while((ch = getchar()) != '\n'){
		if (isalpha(ch)){
			char lower_ch = tolower(ch);
			if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u')
				cnt_vowels ++;
			else
				cnt_consonants ++;
		}
		else if (isdigit(ch))
			cnt_digits ++;
		else if (isspace(ch))
			cnt_spaces ++;
		else
			cnt_special_sym ++;
	}
	printf("\nCounts:\nVowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\nSpecial Symbols: %d\n", cnt_vowels, cnt_consonants, cnt_digits, cnt_spaces, cnt_special_sym);
	return 0;
}

