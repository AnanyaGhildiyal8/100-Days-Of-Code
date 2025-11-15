#include <stdio.h>
int main() 
{
    int n, even = 0, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0) {
        int d = n % 10;
        if (d % 2 == 0) even++;
        else odd++;
        n /= 10;
    }

    printf("Even: %d Odd: %d", even, odd);
    return 0;
}