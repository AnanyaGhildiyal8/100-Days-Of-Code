#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee *e;

    e = (struct Employee*) malloc(sizeof(struct Employee));

    if(e == NULL) {
        printf("Memory Allocation Failed\n");
        return 0;
    }

    scanf("%s %d %f", e->name, &e->id, &e->salary);

    printf("Name: %s, ID: %d, Salary: %.2f\n", e->name, e->id, e->salary);

    free(e);

    return 0;
}

