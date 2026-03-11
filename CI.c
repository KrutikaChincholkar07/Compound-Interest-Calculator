#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, A, CI;

    printf("Enter Principal Amount: ");
    scanf("%f", &P);

    printf("Enter Rate of Interest: ");
    scanf("%f", &R);

    printf("Enter Time (in years): ");
    scanf("%f", &T);

    A = P * pow((1 + R/100), T);
    CI = A - P;

    printf("Compound Interest = %.2f", CI);

    return 0;
}
