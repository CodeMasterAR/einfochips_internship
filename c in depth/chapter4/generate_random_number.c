#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	int a, i, n;
	srand(time(0));
	printf("Enter no to be printed: ");
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		a = rand() % 100 + 1;
		printf("%d\n", a);
		i ++;
	}
	return 0;
}
