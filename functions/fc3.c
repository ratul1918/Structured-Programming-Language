#include<stdio.h>
#include<string.h>

void fun(char str[100]) {
    int i,capital,small,digit;

    printf("Enter the string: ");
    fgets(str, 100, stdin);

    i = capital = small = digit = 0;

    while (str[i] != '\0') {
        if (str[i] >= 65 && str[i] <= 90) {  
            capital++;
        } 
        else if (str[i] >= 97 && str[i] <= 122) {  
            small++;
        } 
        else if (str[i] >= 48 && str[i] <= 57) {  
            digit++;
        }
        i++;
    }

    printf("\nCapital letters: %d\n", capital);
    printf("Small letters: %d\n", small);
    printf("Digits: %d\n", digit);

}
int main(char str[100]){
    int i,capital,small,digit;
    fun();
}