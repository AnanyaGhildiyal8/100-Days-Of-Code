#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[1000];
    fgets(str, sizeof(str), stdin);

    int capNext = 1;
    for(int i=0; str[i]; i++){
        if(isalpha(str[i])){
            if(capNext) str[i] = toupper(str[i]);
            else str[i] = tolower(str[i]);
            capNext = 0;
        } else if(str[i]=='.' || str[i]=='!' || str[i]=='?'){
            capNext = 1;
        }
    }

    printf("%s", str);
    return 0;
}

