/*
    Write a C program to implement a basic Student Management System that can handle up to 100 students.
    The program should support the following features using structures and file handling:

    1. Add a new student (ID, Name, Date of Birth, Blood Group, Total Marks).
    2. Search for a student by either name or ID.
    3. Display all students' details.
    4. Sort and display students by name (alphabetically).
    5. Sort and display students by ID (numerically).
    6. Display statistics about total marks (average, maximum, and minimum).
    7. Save all student data to a file ("students.dat") and load it automatically on startup.

    Requirements:
    - Use a `Student` structure to store student information.
    - Use file I/O to persist student data between sessions.
    - Use functions to modularize tasks (e.g., adding, searching, sorting).
    - Ensure input/output is clear and user-friendly.

    Note:
    - You should prevent adding more than 100 students.
    - For string input (like name or DOB), ensure proper handling of newline characters.
*/



#include <stdio.h>
#include <string.h>
#define MAX_STUDENTS 100

typedef struct {
    int id;
    char name[50];
    char DOB[15];
    char bloodGroup[5];
    int totalMarks;
}Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

void addStudent();
void displayStudents();
void searchStudent();
void sortStudentsByName();
void sortStudentsByID();
void displayMarks();
void saveToFile();
void loadFromFile();

int main() {
    
    int choice;
    loadFromFile();

    do {
        printf("\t\t\t\t\t>>>>>>>>>>>STUDENT MANAGEMENT SYSTEM<<<<<<<<\n");
        printf("\t\t\t\t\t<------------------------------------------>\n");
        printf("\t\t\t\t\t*---------------MAIN MENU------------------*\n");
        printf("\t\t\t\t\t* 1. Add Student                           *\n");
        printf("\t\t\t\t\t* 2. Search Student                        *\n");
        printf("\t\t\t\t\t* 3. Display Students                      *\n");
        printf("\t\t\t\t\t* 4. Sort Students by Name                 *\n");
        printf("\t\t\t\t\t* 5. Sort Students by ID                   *\n");
        printf("\t\t\t\t\t* 6. Display Marks (Average, Max, Min)     *\n");
        printf("\t\t\t\t\t* 7. Save and Exit                         *\n");
        printf("\t\t\t\t\t<------------------------------------------>\n");
        printf("\n*Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: searchStudent(); break;
            case 3: displayStudents(); break;
            case 4: sortStudentsByName(); displayStudents(); break;
            case 5: sortStudentsByID(); displayStudents(); break;
            case 6: displayMarks(); break;
            case 7: saveToFile(); printf("Data saved. Exiting...\n"); break;
            default: printf("Invalid choice. Try again.\n");
        }
    } while (choice != 7);

    return 0;
}

void addStudent() {
    if (studentCount >= MAX_STUDENTS) {
        printf("Student limit reached!\n");
        return;
    }

    printf("Enter student ID: ");
    scanf("%d", &students[studentCount].id);
    printf("Enter student name: ");
    scanf("%s", students[studentCount].name);
    fflush(stdin);
    printf("Enter student DOB (dd/mm/yyyy): ");
    fgets(students[studentCount].DOB, sizeof(students[studentCount].DOB), stdin);
    students[studentCount].DOB[strcspn(students[studentCount].DOB, "\n")] = 0;
    printf("Enter student Blood Group: ");
    scanf("%s", students[studentCount].bloodGroup);
    printf("Enter total marks: ");
    scanf("%d", &students[studentCount].totalMarks);

    studentCount++;
}

void displayStudents() {
    printf("\nStudent Information:\n");
    for (int i = 0; i < studentCount; i++) {
        printf("ID: %d, Name: %s, DOB: %s, Blood Group: %s, Marks: %d\n",
               students[i].id, students[i].name, students[i].DOB, students[i].bloodGroup, students[i].totalMarks);
    }
}

void searchStudent() {
    int id, found = 0;
    char name[50];

    printf("Search by (1) Name or (2) ID? ");
    int option;
    scanf("%d", &option);

    if (option == 1) {
        printf("Enter name: ");
        scanf("%s", name);
        for (int i = 0; i < studentCount; i++) {
            if (strcmp(students[i].name, name) == 0) {
                printf("ID: %d, Name: %s, DOB: %s, Blood Group: %s, Marks: %d\n",
                       students[i].id, students[i].name, students[i].DOB, students[i].bloodGroup, students[i].totalMarks);
                found = 1;
                break;
            }
        }
    } else if (option == 2) {
        printf("Enter ID: ");
        scanf("%d", &id);
        for (int i = 0; i < studentCount; i++) {
            if (students[i].id == id) {
                printf("ID: %d, Name: %s, DOB: %s, Blood Group: %s, Marks: %d\n",
                       students[i].id, students[i].name, students[i].DOB, students[i].bloodGroup, students[i].totalMarks);
                found = 1;
                break;
            }
        }
    } else {
        printf("Invalid option!\n");
    }

    if (!found) {
        printf("Student not found!\n");
    }
}
void sortStudentsByName() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = i + 1; j < studentCount; j++) {
            if (strcmp(students[i].name, students[j].name) > 0) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void sortStudentsByID() {
    for (int i = 0; i < studentCount - 1; i++) {
        for (int j = i + 1; j < studentCount; j++) {
            if (students[i].id > students[j].id) {
                Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void displayMarks() {
    if (studentCount == 0) {
        printf("No students available!\n");
        return;
    }

    int sum = 0, maxMarks = students[0].totalMarks, minMarks = students[0].totalMarks;

    for (int i = 0; i < studentCount; i++) {
        sum += students[i].totalMarks;
        if (students[i].totalMarks > maxMarks) maxMarks = students[i].totalMarks;
        if (students[i].totalMarks < minMarks) minMarks = students[i].totalMarks;
    }

    printf("Average Marks: %.2f\n", sum / (float)studentCount);
    printf("Max Marks: %d\n", maxMarks);
    printf("Min Marks: %d\n", minMarks);
}

void saveToFile() {
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fwrite(&studentCount, sizeof(int), 1, file);
    fwrite(students, sizeof(Student), studentCount, file);
    fclose(file);
}

void loadFromFile() {
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
     
        return;
    }
    fread(&studentCount, sizeof(int), 1, file);
    fread(students, sizeof(Student), studentCount, file);
    fclose(file);
}
