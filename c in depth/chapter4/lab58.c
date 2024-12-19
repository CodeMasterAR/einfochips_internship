/*

Q58: While purchasing certain items, a discount of 10% is offered if the
quantity purchased is more than 1000.if quantity and price per item are input
through the keyboard, write a program to
calculate the total expenses.

*/

#include <stdio.h>

int main() {
	int n, qty;
	float price, total_exp = 0;
	printf("Enter the no of item being purchase: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		printf("Enter the price and quantity as (price, qty): ");
		scanf("%f, %d", &price, &qty);
		if (qty > 1000)
			price = 0.9*price*qty;
		else
			price = price*qty;
		total_exp += price;
	}
	printf("Total expense is %.2f: ", total_exp);
	return 0;
}
