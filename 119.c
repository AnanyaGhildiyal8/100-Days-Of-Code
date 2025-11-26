#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);

    for(int i=0;i<n;i++){
        int idx = arr[i] >=0 ? arr[i] : -arr[i];
        if(arr[idx] >= 0) arr[idx] = -arr[idx];
        else {
            printf("%d", idx);
            return 0;
        }
    }

    return 0;
}
