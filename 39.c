#include <stdio.h>
int main() 
{
    int n, prod = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) 
    prod = 0;
    else while (n > 0)
     {
        prod *= (n % 10);
        n /= 10;
    }

    printf("%d", prod);
    return 0;
}