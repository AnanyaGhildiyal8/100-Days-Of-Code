#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSoFar = arr[0], maxEndingHere = arr[0];

    for(int i = 1; i < n; i++) {
        if(maxEndingHere < 0)
            maxEndingHere = arr[i];
        else
            maxEndingHere += arr[i];

        if(maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;
    }

    printf("%d", maxSoFar);
    return 0;
}
