#include <stdio.h>

enum Roles {ADMIN, USER, GUEST};

int main() {
    enum Roles r;
    printf("Enter role (0-ADMIN,1-USER,2-GUEST): ");
    scanf("%d",&r);

    switch(r){
        case ADMIN: printf("Welcome Admin\n"); break;
        case USER: printf("Welcome User\n"); break;
        case GUEST: printf("Welcome Guest\n"); break;
        default: printf("Invalid role\n");
    }
    return 0;
}