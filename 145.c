#include <stdio.h>

struct Student { char name[50]; int roll; float marks; };

struct Student topStudent(struct Student s[], int n){
    struct Student top = s[0];
    for(int i=1;i<n;i++)
        if(s[i].marks > top.marks) top = s[i];
    return top;
}

int main() {
    struct Student s[5];
    for(int i=0;i<5;i++) scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    struct Student top = topStudent(s,5);
    printf("Top: %s %d %.2f\n", top.name, top.roll, top.marks);
    return 0;
}
