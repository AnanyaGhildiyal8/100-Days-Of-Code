#include <stdio.h>
int main()
 {
    int a, b;
    char op;
    printf("Enter two integers and an operator: ");
    scanf("%d %d %c", &a, &b, &op);

    switch(op) {
        case '+': 
        {printf("%d", a + b); 
        break;}
        case '-': 
        {printf("%d", a - b); 
        break;}
        case '*': 
        {printf("%d", a * b); 
        break;}
        case '/': 
        {if (b == 0) 
            printf("Error");
            else printf("%d", a / b);
            break;}
        case '%': 
        {if (b == 0)
             printf("Error");
            else 
            printf("%d", a % b);
            break;}
        default: printf("Invalid");
    }

    return 0;
}