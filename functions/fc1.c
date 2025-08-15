
#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

struct Student {
    char name[100];
    int id;
    float cgpa;
};

void addStudent(struct Student listOfStudents[], int *numOfStudents);
void highestRankedStudent(struct Student listOfStudents[], int numOfStudents);
void displayAllStudents(struct Student listOfStudents[], int numOfStudents);

int main() {
    struct Student listOfStudents[MAX_STUDENTS];
    int numOfStudents = 0;
    int choice = 0;

    // Use a while loop to keep displaying the menu until the user exits.
    while (choice != 4) {
        printf("\n1. Add a student\n");
        printf("2. Highest Ranked Student\n");
        printf("3. List of the students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(listOfStudents, &numOfStudents);
                break;
            case 2:
                highestRankedStudent(listOfStudents, numOfStudents);
                break;
            case 3:
                displayAllStudents(listOfStudents, numOfStudents);
                break;
            case 4:
                printf("Exiting the system...\n");
                break;
            default:
                printf("Invalid choice, please try again.\n");
        }
    }

    return 0;
}

void addStudent(struct Student listOfStudents[], int *numOfStudents) {
    if (*numOfStudents >= MAX_STUDENTS) {
        printf("Cannot add more students. Limit reached.\n");
        return;
    }

    printf("Name of the student: ");
    scanf(" %99[^\n]s", listOfStudents[*numOfStudents].name);  // Avoids getchar and fgets issues...

    printf("ID: ");
    scanf("%d", &listOfStudents[*numOfStudents].id);

    printf("CGPA: ");
    scanf("%f", &listOfStudents[*numOfStudents].cgpa);

    (*numOfStudents)++;
    printf("Student added successfully!\n");
}

void highestRankedStudent(struct Student listOfStudents[], int numOfStudents) {
    if (numOfStudents == 0) {
        printf("No students in the system.\n");
        return;
    }

    int highestIndex = 0;
    for (int i = 1; i < numOfStudents; i++) {
        if (listOfStudents[i].cgpa > listOfStudents[highestIndex].cgpa) {
            highestIndex = i;
        }
    }

    printf("Name of the Highest Ranked Student: %s\n", listOfStudents[highestIndex].name);
}

void displayAllStudents(struct Student listOfStudents[], int numOfStudents) {
    if (numOfStudents == 0) {
        printf("No students in the system.\n");
        return;
    }

    for (int i = 0; i < numOfStudents; i++) {
        printf("Name of the student: %s\n", listOfStudents[i].name);
        printf("ID: %05d\n", listOfStudents[i].id);
        printf("CGPA: %.2f\n", listOfStudents[i].cgpa);
    }
}
