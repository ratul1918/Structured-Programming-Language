#include <stdio.h>
#include <stdlib.h> // For exit()

int main() {
    FILE *inputFile, *outputFile;
    int num, max;

    // Open the input file "in.txt"
    inputFile = fopen("in.txt", "r");
    if (inputFile == NULL) {
        printf("Error: Could not open input file 'in.txt'.\n");
        return 1;
    }

    // Initialize max by reading the first number
    if (fscanf(inputFile, "%d", &num) != 1) {
        printf("Error: 'in.txt' is empty or doesn't contain valid numbers.\n");
        fclose(inputFile);
        return 1;
    }
    max = num;

    // Read the rest of the numbers and find the maximum
    while (fscanf(inputFile, "%d", &num) == 1) {
        if (num > max) {
            max = num;
        }
    }

    // Close the input file
    fclose(inputFile);

    // Open the output file "out.txt"
    outputFile = fopen("out.txt", "w");
    if (outputFile == NULL) {
        printf("Error: Could not open output file 'out.txt'.\n");
        return 1;
    }

    // Write the maximum value to the output file
    fprintf(outputFile, "Maximum value: %d\n", max);

    // Close the output file
    fclose(outputFile);

    // Success message
    printf("The maximum value has been written to 'out.txt'.\n");

    return 0;
}
