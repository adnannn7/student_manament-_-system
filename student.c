#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    char course[30];
    int semester;
};

struct Student students[100];
int count = 0;

void addStudent() {
    if (count >= 100) {
        printf("\nStudent limit reached!\n");
        return;
    }

    printf("\nEnter student name: ");
    scanf(" %[^\n]", students[count].name);

    printf("Enter roll number: ");
    scanf("%d", &students[count].roll);

    printf("Enter course: ");
    scanf(" %[^\n]", students[count].course);

    printf("Enter semester: ");
    scanf("%d", &students[count].semester);

    count++;
    printf("\nStudent added successfully!\n");
}

void displayAllStudents() {
    int i;

    if (count == 0) {
        printf("\nNo student records found.\n");
        return;
    }

    printf("\n========== ALL STUDENTS ==========\n");

    for (i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name     : %s\n", students[i].name);
        printf("Roll No. : %d\n", students[i].roll);
        printf("Course   : %s\n", students[i].course);
        printf("Semester : %d\n", students[i].semester);
        printf("-----------------------------\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            addStudent();
        } else if (choice == 2) {
            displayAllStudents();
        } else if (choice == 3) {
            printf("\nThank you!\n");
            break;
        } else {
            printf("\nInvalid choice!\n");
        }
    }

    return 0;
}