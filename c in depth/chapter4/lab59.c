/*

Q59: WAP to check whether a given sequence of values is sorted in
increasing order. The sentinel value for the sequence is -1

*/

#include <stdio.h>
#include <stdbool.h>

int main() {
	int num, max = 1 << 31;
	bool is_in_order = true;
	while (1){
		printf("Enter the num: ");
		scanf("%d", &num);
		if (num == -1)
			break;
		else if (num >= max)
			max = num;
		else
			is_in_order = false;
	}
	if (is_in_order)
		printf("Given sequence is in increasing order\n");
	else
		printf("Given sequence is not in increasing order\n");
	return 0;
}
