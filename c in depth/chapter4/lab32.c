/*

Q32: WAP to find the average of the values read from the input. The
sequence of values in the input is terminated by -1.

*/

#include <stdio.h>

int main(){
	int num, count = 0;
	float sum, avg;
	char ch;
	printf("Enter numbers (terminate with -1): \n");
	while (1){
		scanf("%d", &num);
		if (num == -1)
			break;
		sum += num;
		count ++;
	}
	if (count == 0)
		printf("No number entered\n");
	else{
		avg = sum / count;
		printf("Average is %.2lf\n", avg);
	}
	return 0;
}
