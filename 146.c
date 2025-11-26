#include <stdio.h>

struct Date { int day, month, year; };
struct Employee { char name[50]; int id; struct Date joining; };

int main() {
    struct Employee e;
    scanf("%s %d %d %d %d", e.name, &e.id, &e.joining.day, &e.joining.month, &e.joining.year);
    printf("Name:%s ID:%d Joining:%d/%d/%d\n", e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
    return 0;
}
