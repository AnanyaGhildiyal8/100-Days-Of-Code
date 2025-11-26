#include <stdio.h>

int main() {
    FILE *fp = fopen("numbers.txt", "r");
    if(fp==NULL){ printf("Error opening file"); return 1; }

    int num, sum=0, count=0;
    while(fscanf(fp, "%d", &num) != EOF){
        sum += num;
        count++;
    }

    printf("Sum: %d\nAverage: %.2f\n", sum, (count>0)? (float)sum/count : 0);
    fclose(fp);
    return 0;
}
