#include <stdio.h>

enum Traffic {RED, YELLOW, GREEN};

int main() {
    enum Traffic t;
    printf("Enter traffic light (0-RED,1-YELLOW,2-GREEN): ");
    scanf("%d", &t);

    switch(t){
        case RED: printf("Stop\n"); break;
        case YELLOW: printf("Wait\n"); break;
        case GREEN: printf("Go\n"); break;
        default: printf("Invalid input\n");
    }
    return 0;
}