#include <stdio.h>
int main()
 {
    int n, sq, temp, pow10 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp > 0) {
        pow10 *= 10;
        temp /= 10;
    }

    sq = n * n;

    if (sq % pow10 == n)
     printf("Automorphic");
    else 
    printf("Not Automorphic");

    return 0;
}