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