#include <stdio.h>

int main() {
    int num, square, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    square = num * num;

    while (square != 0) {
        remainder = square % 10;
        sum += remainder;
        square /= 10;
    }

    if (sum == num)
        printf("%d is a Neon number.\n", num);
    else
        printf("%d is not a Neon number.\n", num);

    return 0;
}
