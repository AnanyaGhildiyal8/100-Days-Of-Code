#include <stdio.h>

enum Colors {RED, GREEN, BLUE};

int main() {
    for(int i=RED;i<=BLUE;i++)
        printf("Color index %d\n", i);
    return 0;
}
