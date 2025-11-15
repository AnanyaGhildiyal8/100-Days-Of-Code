#include <stdio.h>
int main() 
{
    int n, sum = 0, prod = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int temp = n;
    while (temp > 0) {
        int d = temp % 10;
        sum += d;
        prod *= d;
        temp /= 10;
    }

    if (sum == prod) 
    printf("Spy");
    else 
        printf("Not Spy");

    return 0;
}