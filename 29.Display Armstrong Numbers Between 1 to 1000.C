#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, digits;
    double result;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++) {
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
