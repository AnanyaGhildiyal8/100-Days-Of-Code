#include <stdio.h>
int main() 
{
    int start, end;
    printf("Enter the range (start end): ");
    scanf("%d %d", &start, &end);

    for (int n = start; n <= end; n++) 
    {
        int isPrime = 1;

        if (n < 2) 
        continue;

        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) 
            {
                isPrime = 0;
                break;
            }

        if (isPrime) 
            printf("%d ", n);
    }

    return 0;
}