#include<stdio.h>
#include<string.h>

/*
    Write a C program to manage and display information for two persons using a structure.

    Requirements:
    - Define a structure `person` with the following fields:
        - name (string)
        - age (integer)
        - salary (float)
        - blood group (string)
    - Create two structure variables: `person1` and `person2`.
    - Take input from the user for both persons:
        - Name
        - Age
        - Salary
        - Blood group
    - Create a function `display()` that takes a structure as argument and displays the details.
    - Call `display()` to show the details of both persons.
*/

struct person {
    char name[50];
    int age;
    float salary;
    char bloodGrp[3];
};

// Function to display person's details..
void display(struct person p) {
    printf("\n--- Person Details ---\n");
    printf("Name       : %s\n", p.name);
    printf("Age        : %d\n", p.age);
    printf("Salary     : %.2f\n", p.salary);
    printf("Blood Group: %s\n", p.bloodGrp);
}

int main() {
    struct person person1, person2;

    printf("Enter info for person1\n");
    printf("Enter name: ");
    fflush(stdin);
    gets(person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter salary: ");
    scanf("%f", &person1.salary);

    fflush(stdin);
    printf("Enter Blood group: ");
    gets(person1.bloodGrp);

    printf("\nEnter info for person2\n");
    printf("Enter name: ");
    fflush(stdin);
    gets(person2.name);

    printf("Enter age: ");
    scanf("%d", &person2.age);

    printf("Enter salary: ");
    scanf("%f", &person2.salary);

    fflush(stdin);
    printf("Enter Blood group: ");
    gets(person2.bloodGrp);

    display(person1);
    display(person2);

    return 0;
}
