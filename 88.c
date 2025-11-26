#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int l = (a * b) / gcd(a, b);
    printf("LCM: %d", l);

    return 0;
}

