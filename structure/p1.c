

/*
    Write a C program that continuously reads integer inputs from the user until either:
    - the user enters -1, or
    - the input is invalid (non-integer).

    For each valid integer input, the program should calculate its square root and store it.
    After termination of input, the program should print all the computed square roots 
    in **reverse order** of input, each formatted to **4 decimal places**.

    Requirements:
    - Use an array to store the square roots.
    - Handle up to 1,000,000 inputs.
    - Use `sqrt()` from `math.h` to compute square roots.
    - Input is terminated by `-1` or non-integer input.
    - Display results in reverse order of input.
*/

#include <stdio.h>
#include <math.h>

int main() {
    double numbers[1000000];
    int count = 0;
    long long int n;
    int flag=1;

    while (flag) {
        if (scanf("%lld", &n) != 1) {
            flag = 0;
        } else if (n == -1) {
            flag = 0;
        } else {
            numbers[count++] = sqrt((double)n);
        }
    }
    
    for (int i = count - 1; i >= 0; i--) {
        printf("%.4lf\n", numbers[i]);
    }

    return 0;
}
