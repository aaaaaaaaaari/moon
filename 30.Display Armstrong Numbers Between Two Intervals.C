#include <stdio.h>
#include <math.h>

int main() {
    int low, high, num, originalNum, remainder, digits;
    double result;

    printf("Enter lower limit: ");
    scanf("%d", &low);
    printf("Enter upper limit: ");
    scanf("%d", &high);

    printf("Armstrong numbers between %d and %d:\n", low, high);

    for (num = low; num <= high; num++) {
        originalNum = num;
        digits = 0;
        result = 0.0;

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
            printf("%d ", num);
    }

    return 0;
}
