#include <stdio.h>

enum Menu {ADD, SUBTRACT, MULTIPLY};

int main() {
    enum Menu choice;
    int x,y;
    printf("Enter choice (0-ADD,1-SUBTRACT,2-MULTIPLY) and two numbers: ");
    scanf("%d %d %d",&choice,&x,&y);

    switch(choice){
        case ADD: printf("Sum=%d\n", x+y); break;
        case SUBTRACT: printf("Difference=%d\n", x-y); break;
        case MULTIPLY: printf("Product=%d\n", x*y); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
