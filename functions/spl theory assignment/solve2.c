#include <stdio.h>
double calculateAverage(double arr[], int size);
int searchNumber(double arr[], int size, double num, int *frequency);
void sortAscending(double arr[], int size);
void sortDescending(double arr[], int size);
void displayArray(double arr[], int size);

int main() {
    int option, size, i;
    double number, average;
    
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    double arr[size];

  
    printf("Enter %d elements :\n", size);
    for (i = 0; i < size; i++) {
        scanf("%lf", &arr[i]);
    }

    do {
     
        printf("\nMenu:\n");
        printf("1. Calculate Average\n");
        printf("2. Search for a Number\n");
        printf("3. Sort in Ascending Order\n");
        printf("4. Sort in Descending Order\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1: 
                average = calculateAverage(arr, size);
                printf("Average: %.2lf\n", average);
                break;

            case 2:
                printf("Enter number to search: ");
                scanf("%lf", &number);
                int frequency = 0;
                if (searchNumber(arr, size, number, &frequency)) {
                    printf("Number %.2lf found, frequency: %d\n", number, frequency);
                } else {
                    printf("Number %.2lf not found.\n", number);
                }
                break;

            case 3:
                sortAscending(arr, size);
                printf("Array in ascending order: ");
                displayArray(arr, size);
                break;

            case 4:
                sortDescending(arr, size);
                printf("Array in descending order: ");
                displayArray(arr, size);
                break;

            case 5:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid option! Please try again.\n");
        }

    } while (option != 5);

    return 0;
}

double calculateAverage(double arr[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int searchNumber(double arr[], int size, double num, int *frequency) {
    int found = 0;
    *frequency = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            found = 1;
            (*frequency)++;
        }
    }
    return found;
}

void sortAscending(double arr[], int size) {
    double temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void sortDescending(double arr[], int size) {
    double temp;
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void displayArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}