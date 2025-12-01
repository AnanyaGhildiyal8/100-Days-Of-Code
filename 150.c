#include <stdio.h>
#include <string.h>

// Define a structure
typedef struct {
    int id;
    char name[50];
    float gpa;
    int age;
} Student;

// Function prototypes
void displayStudent(const Student *s);
void modifyStudent(Student *s);

int main() {
    // Create a student instance
    Student student1 = {101, "Alice", 3.8, 20};
    Student student2 = {102, "Bob", 3.5, 21};
    
    // Create pointers to the structs
    Student *ptr1 = &student1;
    Student *ptr2 = &student2;
    
    printf("=== Original Student Data ===\n");
    printf("Student 1 (using pointer):\n");
    displayStudent(ptr1);
    
    printf("\nStudent 2 (using pointer):\n");
    displayStudent(ptr2);
    
    // Modify data using pointers and -> operator
    printf("\n=== Modifying Student Data ===\n");
    modifyStudent(ptr1);
    modifyStudent(ptr2);
    
    printf("\n=== Updated Student Data ===\n");
    printf("Student 1:\n");
    displayStudent(ptr1);
    
    printf("\nStudent 2:\n");
    displayStudent(ptr2);
    
    // Dynamic allocation example
    printf("\n=== Dynamic Allocation Example ===\n");
    Student *dynamicStudent = (Student *)malloc(sizeof(Student));
    
    if (dynamicStudent != NULL) {
        // Initialize using -> operator
        dynamicStudent->id = 103;
        strcpy(dynamicStudent->name, "Charlie");
        dynamicStudent->gpa = 3.9;
        dynamicStudent->age = 22;
        
        printf("Dynamically allocated student:\n");
        displayStudent(dynamicStudent);
        
        // Modify dynamically allocated student
        printf("\nModifying dynamic student...\n");
        dynamicStudent->gpa = 4.0;
        strcpy(dynamicStudent->name, "Charles");
        dynamicStudent->age = 23;
        
        printf("Updated dynamic student:\n");
        displayStudent(dynamicStudent);
        
        // Free dynamically allocated memory
        free(dynamicStudent);
    }
    
    // Array of structs with pointers example
    printf("\n=== Array of Structs Example ===\n");