#include <stdio.h>
#include <string.h>

int main() {
    char s[100], t[100];
    scanf("%s %s", s, t);

    int count[26] = {0};

    for(int i = 0; s[i]; i++)
        count[s[i]-'a']++;

    for(int i = 0; t[i]; i++)
        count[t[i]-'a']--;

    int flag = 1;
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            flag = 0;
            break;
        }
    }

    if(flag) printf("Anagram");
    else printf("Not Anagram");

    return 0;
}

