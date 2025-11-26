#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    scanf("%d", &target);

    int first = -1, last = -1;

    // First occurrence
    for(int i = 0; i < n; i++) {
        if(arr[i] == target) {
            first = i;
            break;
        }
    }

    // Last occurrence
    for(int i = n-1; i >= 0; i--) {
        if(arr[i] == target) {
            last = i;
            break;
        }
    }

    printf("%d %d", first, last);
    return 0;
}
