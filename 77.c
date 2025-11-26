#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n], freq[10000] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < n; i++) {
        int d = a[i][i];
        if (freq[d]) {
            printf("Not Distinct");
            return 0;
        }
        freq[d] = 1;
    }

    printf("Distinct");
    return 0;
}
