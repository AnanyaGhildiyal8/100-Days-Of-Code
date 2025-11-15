#include <stdio.h>
int main() 
{
    int d, fine = 0;
    printf("Enter number of days late: ");
    scanf("%d", &d);

    if (d <= 5) {
        fine = d * 2;
    } else if (d <= 10) {
        fine = 5 * 2 + (d - 5) * 4;
    } else if (d <= 30) {
        fine = 5 * 2 + 5 * 4 + (d - 10) * 6;
    } else {
        printf("Membership Cancelled");
        return 0;
    }

    printf("Fine = %d", fine);
    return 0;
}