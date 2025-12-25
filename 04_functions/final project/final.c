#include <stdio.h>
int main() {
    int option;
    double num1, num2, result;

    while (1) {
        printf("\nOperations Manager Tool\n");
        printf("******************************\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("******************************\n");
    
        if (scanf("%d", &option) != 1) {
            printf("Invalid selection. Please select a number between 1 and 6.\n");
            while(getchar() != '\n');
            continue;
        }

        if (option == 6) {
            printf("Exiting the program. Goodbye!\n");
            break;
        }

        if (option < 1 || option > 6) {
            printf("Invalid selection. Please select a number between 1 and 6.\n");
            continue;
        }

        printf("Enter the first number: ");
        while (scanf("%lf", &num1) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');
        }

        printf("Enter the second number: ");
        while (scanf("%lf", &num2) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            while(getchar() != '\n');
        }

        if (option == 1) {
            result = num1 + num2;
            printf("The result of %.2lf + %.2lf is: %.2lf\n", num1, num2, result);
        } else if (option == 2) {
            result = num1 - num2;
            printf("The result of %.2lf - %.2lf is: %.2lf\n", num1, num2, result);
        } else if (option == 3) {
            result = num1 * num2;
            printf("The result of %.2lf * %.2lf is: %.2lf\n", num1, num2, result);
        } else if (option == 4) {
            if (num2 == 0) {
                printf("Division by zero is not allowed. Please try again.\n");
            } else {
                result = num1 / num2;
                printf("The result of %.2lf / %.2lf is: %.2lf\n", num1, num2, result);
            }
        } else if (option == 5) {
            
            if ((int)num2 == 0) {
                printf("Modulus by zero is not allowed. Please try again.\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("The result of %.0lf %% %.0lf is: %.0lf\n", num1, num2, result);
            }
        }
    }

    return 0;
}