#include <stdio.h>
int main() {
    int option;
    double num1, num2, result;
    while (1) {
        printf("\t\t\t\t\t******************************\n");
        printf("\t\t\t\t\t*   Operations Manager Tool  *\n");
        printf("\t\t\t\t\t* 1. Add (+)                 *\n");
        printf("\t\t\t\t\t* 2. Subtract (-)            *\n");
        printf("\t\t\t\t\t* 3. Multiply (*)            *\n");
        printf("\t\t\t\t\t* 4. Divide (/)              *\n");
        printf("\t\t\t\t\t* 5. Modulus (%%)             *\n");
        printf("\t\t\t\t\t* 6. Absolute Difference     *\n");
        printf("\t\t\t\t\t* 7. Square Root Calculation *\n");
        printf("\t\t\t\t\t* 8. Distance Calculation    *\n");
        printf("\t\t\t\t\t* 9. Exit                    *\n");
        printf("\t\t\t\t\t******************************\n");
        printf("\t\t\t\t\tSelect an option (1-9): ");

        if (scanf("%d", &option) != 1) {
            printf("Invalid selection.Select a number between 1 and 9.\n");
            while (getchar() != '\n');
            continue;
        }

        if (option == 9) {
            printf("Exiting the program.Goodbye!!!!\n");
            break;
        }

        if (option < 1 || option > 9) {
            printf("Invalid selection.Select a number between 1 and 9.\n");
            continue;
        }

        if (option == 7) {
            printf("Enter a number to find square root: ");
            while (scanf("%lf", &num1) != 1) {
                printf("Invalid input.Enter a valid number.\n");
                while (getchar() != '\n');
            }

            if (num1 < 0) {
                printf("Square root of a negative number is not allowed.Try again.\n");
            } else {
                result = num1 / 2.0;
                double temp = 0;
                while (result != temp) {
                    temp = result;
                    result = (num1 / temp + temp) / 2;
                }
                printf("The square root of %.2lf is: %.2lf\n", num1, result);
            }
            continue;
        }

        printf("Enter the first number: ");
        while (scanf("%lf", &num1) != 1) {
            printf("Invalid input.Enter a valid number.\n");
            while (getchar() != '\n');
        }

        if (option != 7) {
            printf("Enter the second number: ");
            while (scanf("%lf", &num2) != 1) {
                printf("Invalid input.Enter a valid number.\n");
                while (getchar() != '\n');
            }
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
                printf("Division by zero is not allowed.Try again.\n");
            } else {
                result = num1 / num2;
                printf("The result of %.2lf / %.2lf is: %.2lf\n", num1, num2, result);
            }
        } else if (option == 5) {
            result = (int)num1 % (int)num2;
            printf("The result of %.0lf %% %.0lf is: %.0lf\n", num1, num2, result);
        } else if (option == 6) {
            result = num1 - num2;
            if (result < 0) result = -result;
            printf("The absolute difference of %.2lf and %.2lf is: %.2lf\n", num1, num2, result);
        } else if (option == 8) {
            double x1, y1, x2, y2;
            printf("Enter the first point (x1 y1): ");
            while (scanf("%lf %lf", &x1, &y1) != 2) {
                printf("Invalid input.Enter valid numbers for x1 and y1.\n");
                while (getchar() != '\n');
            }

            printf("Enter the second point (x2 y2): ");
            while (scanf("%lf %lf", &x2, &y2) != 2) {
                printf("Invalid input.Enter valid numbers for x2 and y2.\n");
                while (getchar() != '\n');
            }

            double dx = x2 - x1;
            double dy = y2 - y1;
            double distance = dx / 2.0 + dy / 2.0; 
            double temp = 0;
            while (distance != temp) {
                temp = distance;
                distance = (dx / temp + temp) / 2.0;
            }
            printf("The distance between the points (%.2lf, %.2lf) and (%.2lf, %.2lf) is: %.2lf\n", x1, y1, x2, y2, distance);
        }
    }

    return 0;
}