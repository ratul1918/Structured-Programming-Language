#include <stdio.h>
#include <string.h>

/*
    Write a C program to manage a list of students using structures.
    The program should provide the following features via a menu-driven interface:

    1. Add a new student by entering their name, ID, and GPA.
    2. Display the details of the highest ranked student (the one with the highest GPA).
    3. Display the details of all students.
    4. Exit the program.

    Use a structure `stu` to store student information, and limit the total number 
    of students to 100.
*/

struct stu {
    char name[50];
    int id;
    float gpa;
};

void menu();
void addStudent(struct stu list[], int n);             
int highestRankedStudent(struct stu list[], int n);    
void displayAllStudents(struct stu list[], int n);

int main() {
    int num = 0;
    struct stu s[100];

    while (1) {
        menu();
        int opt;
        printf("Enter your choice: ");
        scanf("%d", &opt);

        if (opt == 1) {
            if (num < 100) {
                addStudent(s, num);
                num++;
            } else {
                printf("Maximum number of students reached.\n");
            }
        }
        else if (opt == 2) {
            if (num > 0) {
                int idx = highestRankedStudent(s, num);
                printf("Top Student:\n");
                printf("Name: %s\n", s[idx].name);
                printf("ID: %d\n", s[idx].id);
                printf("GPA: %.2f\n", s[idx].gpa);
            } else {
                printf("No students available to rank.\n");
            }
        }
        else if (opt == 3) {
            if (num > 0) {
                displayAllStudents(s, num);
            } else {
                printf("No students to show.\n");
            }
        }
        else if (opt == 4) {
            return 0;
        }
        else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

void menu() {
    printf("\n1. Add a student\n");
    printf("2. Highest Ranked Student\n");
    printf("3. List of All Students\n");
    printf("4. Exit\n");
}

void addStudent(struct stu list[], int n) {
    printf("Enter student details:\n");
    printf("Name: ");
    getchar();  // To consume leftover newline
    fgets(list[n].name, sizeof(list[n].name), stdin);
    list[n].name[strcspn(list[n].name, "\n")] = 0;  // Remove newline

    printf("ID: ");
    scanf("%d", &list[n].id);
    printf("GPA: ");
    scanf("%f", &list[n].gpa);
}

int highestRankedStudent(struct stu list[], int n) {
    int idx = 0;
    float maxGPA = list[0].gpa;

    for (int i = 1; i < n; i++) {
        if (list[i].gpa > maxGPA) {
            maxGPA = list[i].gpa;
            idx = i;
        }
    }

    return idx;
}

void displayAllStudents(struct stu list[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", list[i].name);
        printf("ID: %d\n", list[i].id);
        printf("GPA: %.2f\n\n", list[i].gpa);
    }
}
