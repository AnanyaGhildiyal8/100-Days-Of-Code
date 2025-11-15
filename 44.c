#include <stdio.h>
int main()
 {
    long long n;
    int hasZero = 0;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n > 0)
     {
        if (n % 10 == 0) hasZero = 1;
        n /= 10;
    }

    if (hasZero)
        printf("Duck");
    else
        printf("Not Duck");

    return 0;
}