#include <stdio.h>
int main() 
{
    int a, b, x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while (x != y)
     {
        if (x > y) x -= y;
        else y -= x;
    }

    if (x == 1) 
    printf("Co-prime");
    else 
        printf("Not Co-prime");

    return 0;
}