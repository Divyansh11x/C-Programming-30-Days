#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (original != 0) {
        digits++;
        original /= 10;
    }

    original = num;

    while (original != 0) {
        remainder = original % 10;
        sum += pow(remainder, digits);
        original /= 10;
    }

    if ((int)sum == num)
        printf("%d is an Armstrong Number.\n", num);
    else
        printf("%d is Not an Armstrong Number.\n", num);

    return 0;
}