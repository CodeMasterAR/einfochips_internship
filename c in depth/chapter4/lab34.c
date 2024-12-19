/*

Q34: WAP to print all the ASCII values and their equivalent characters
using a while loop. The ASCII values vary from 0 to 255.

*/

#include <stdio.h>
#include <ctype.h>

int main() {
	int i = 0;
	while (i <= 255){
		if (isprint(i))
			printf("ASCII val: %3d, character: %c\n", i, (char)(i));
		else
			printf("ASCII val: %3d, character: <not-printable>\n", i);
		i++;
	}
	return 0;
}
