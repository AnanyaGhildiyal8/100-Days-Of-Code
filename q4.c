#include <stdio.h>
int main()
 {
    int radius;
    int pi = 3; // simple integer approximation
    printf("Enter radius: ");
    scanf("%d", &radius);
    printf("Area = %d\n", pi * radius * radius);
    printf("Circumference = %d\n", 2 * pi * radius);
    return 0;
}