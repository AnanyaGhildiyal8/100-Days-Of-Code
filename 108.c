#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n], ans[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j)
                prod *= arr[j];
        }
        ans[i] = prod;
    }

    for(int i = 0; i < n; i++)
        printf("%d ", ans[i]);

    return 0;
}
