#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter name roll marks: ");
    scanf("%s %d %f", s.name, &s.roll_no, &s.marks);

    printf("Name: %s, Roll: %d, Marks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}
