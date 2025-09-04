#include <stdio.h>
int main()
 {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    int i;
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (%%): ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
   simpleInterest = (principal * rate * time) / 100;
   compoundInterest = principal;
    for(i = 1; i <= time; i++) {
        compoundInterest = compoundInterest + (compoundInterest * rate / 100);
    }
    compoundInterest = compoundInterest - principal; // interest only
    printf("Simple Interest = %.2f\n", simpleInterest);
    printf("Compound Interest = %.2f\n", compoundInterest);
    return 0;
}