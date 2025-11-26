#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int k = 0; k < n; k++) {
        for (int i = 0, j = k; j >= 0; i++, j--)
            printf("%d ", a[i][j]);
    }

    for (int k = 1; k < n; k++) {
        for (int i = k, j = n - 1; i < n; i++, j--)
            printf("%d ", a[i][j]);
    }

    return 0;
}
