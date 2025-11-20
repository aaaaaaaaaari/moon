#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits = 0;
    double result = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        digits++;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        result += pow(remainder, digits);
        originalNum /= 10;
    }

    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}

