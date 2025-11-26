#include <stdio.h>

enum Gender {MALE, FEMALE};

struct Person {
    char name[50];
    enum Gender g;
};

int main() {
    struct Person p;
    printf("Enter name and gender(0-MALE,1-FEMALE): ");
    scanf("%s %d", p.name, &p.g);

    printf("Name: %s, Gender: %s\n", p.name, (p.g==MALE)?"Male":"Female");
    return 0;
}
