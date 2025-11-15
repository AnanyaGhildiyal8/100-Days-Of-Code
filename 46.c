#include <stdio.h>
int main() 
{
    int n, sq, sum = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    sq = n * n;
    while (sq > 0) {
        sum += sq % 10;
        sq /= 10;
    }

    if (sum == n) 
     printf("Neon");
    else 
        printf("Not Neon");

    return 0;
}