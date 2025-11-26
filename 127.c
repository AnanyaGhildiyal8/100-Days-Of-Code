#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");

    if(in==NULL || out==NULL){ printf("Error opening file"); return 1; }

    char ch;
    while((ch=fgetc(in)) != EOF){
        if(islower(ch)) ch = toupper(ch);
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);
    return 0;
}

