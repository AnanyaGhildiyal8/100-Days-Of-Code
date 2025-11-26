#include <stdio.h>

int main() {
    char src[50], dest[50];
    scanf("%s %s", src, dest);

    FILE *fs = fopen(src, "r");
    if(fs==NULL){ printf("Error opening source file"); return 1; }

    FILE *fd = fopen(dest, "w");
    if(fd==NULL){ printf("Error opening destination file"); return 1; }

    char ch;
    while((ch=fgetc(fs)) != EOF){
        fputc(ch, fd);
    }

    fclose(fs);
    fclose(fd);
    return 0;
}
