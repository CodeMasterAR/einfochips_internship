/*

Q33: WAP to find the maximum, second maximum, position of maximum
and position of second maximum from the sequence of n numbers.

*/

#include <stdio.h>

int main() {
    int cnt = 1, n, num;
    int max = -1e9, second_max = -1e9; // Initialize to a very low value
    int position_of_max = -1, position_of_second_max = -1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter at least one number.\n");
        return 0;
    }

    printf("Enter %d numbers:\n", n);
    while (cnt <= n) {
        scanf("%d", &num);

        if (num > max) {
            second_max = max;
            position_of_second_max = position_of_max;

            max = num;
            position_of_max = cnt;
        } else if (num > second_max && num < max) {
            second_max = num;
            position_of_second_max = cnt;
        }

        cnt++;
    }

    printf("Max value is %d and position is %d\n", max, position_of_max);
    if (position_of_second_max != -1) {
        printf("Second Max value is %d and position is %d\n", second_max, position_of_second_max);
    } else {
        printf("Second maximum does not exist.\n");
    }

    return 0;
}

