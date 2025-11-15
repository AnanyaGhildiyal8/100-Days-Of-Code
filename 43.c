#include <stdio.h>
int main()
 {
    int n, arr[20], i = 0;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0) {
        arr[i++] = n % 10;
        n /= 10;
    }

    while (i--)
        printf("%d ", arr[i]);

    return 0;
}