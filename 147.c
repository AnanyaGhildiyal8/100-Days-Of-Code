#include <stdio.h>

struct Employee { char name[50]; int id; float salary; };

int main() {
    struct Employee e;
    scanf("%s %d %f", e.name, &e.id, &e.salary);

    FILE *fp = fopen("emp.dat", "wb");
    fwrite(&e, sizeof(e), 1, fp);
    fclose(fp);

    fp = fopen("emp.dat", "rb");
    struct Employee readE;
    fread(&readE, sizeof(readE), 1, fp);
    printf("Name:%s ID:%d Salary:%.2f\n", readE.name, readE.id, readE.salary);
    fclose(fp);

    return 0;
}
