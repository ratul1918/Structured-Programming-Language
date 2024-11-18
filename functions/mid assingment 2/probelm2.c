#include <stdio.h>
void input_CT_marks(float ct_marks[], int n) {
    printf("Enter the marks of %d class tests:\n", n);
    for (int i = 0; i < n; i++) {
        printf("CT %d: ", i + 1);
        scanf("%f", &ct_marks[i]);
    }
}
float take_Highest_CT(float ct_marks[], int n) {
    float highest = ct_marks[0];
    for (int i = 1; i < n; i++) {
        if (ct_marks[i] > highest) {
            highest = ct_marks[i];
        }
    }
    return highest;
}

int main() {
    int n;

    printf("Enter the number of class tests attended: ");
    scanf("%d", &n);

    float ct_marks[n];

    input_CT_marks(ct_marks, n);
    float highest_mark = take_Highest_CT(ct_marks, n);
    printf("The highest class test mark is: %.2f\n", highest_mark);

    return 0;
}
