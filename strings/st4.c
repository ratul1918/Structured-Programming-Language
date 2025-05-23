#include<stdio.h>
#include<string.h>

int main(){
    char s1[] = "Rafiur Rahman Ratul"; // Initialize string
    int i = 0, len = 0;

    while(s1[i] != '\0') {  // Loop until end of string
        i++;                // Move to next character
        len++;              // Count each character
    }

    printf("Length = %d", len);  // Print string length
    return 0;
}
