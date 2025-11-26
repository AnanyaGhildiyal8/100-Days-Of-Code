#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[200];
    fgets(s1, sizeof(s1), stdin);

    strcpy(s2, s1);

    printf("Copied String: %s", s2);
    return 0;
}
