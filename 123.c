#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp = fopen("input.txt", "r");
    if(fp == NULL){
        printf("Error opening file!");
        return 1;
    }

    char ch;
    int chars=0, words=0, lines=0;
    int inWord = 0;

    while((ch = fgetc(fp)) != EOF){
        chars++;
        if(ch=='\n') lines++;
        if(isspace(ch)) inWord=0;
        else if(!inWord){ words++; inWord=1; }
    }

    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    fclose(fp);
    return 0;
}
