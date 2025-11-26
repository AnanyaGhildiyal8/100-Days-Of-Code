#include <stdio.h>

int main() {
    char filename[50];
    scanf("%s", filename);

    FILE *fp = fopen(filename, "a");
    if(fp==NULL){ printf("Error opening file"); return 1; }

    char line[500];
    printf("Enter text to append: ");
    getchar(); // consume newline
    fgets(line, sizeof(line), stdin);

    fprintf(fp, "%s", line);
    fclose(fp);
    return 0;
}