#include<stdio.h>
void updateBalance(float balances[], int customerID, int transactionType, float amount){
    if (transactionType == 1) {
        if (balances[customerID] >= amount) {
            balances[customerID] -= amount;
            printf("Withdrawal successful.New balance: %.2f\n", balances[customerID]);
        } else {
            printf("Not sufficient balance\n");
        }
    }
    else if (transactionType == 2) {
        balances[customerID] += amount;
        printf("Deposit successful. Updated balance: %.2f\n", balances[customerID]);
    }

}
int main(){
    int balances[10];
    int customerID, transactionType;
    float amount;

    printf("Enter inital balance: ");

    for (int i = 0; i <= 10; i++) {
        printf("Customer %d: ", i);
        scanf("%f", &balances[i]);
    }
     printf("Enter customer ID (0-10): ");
    scanf("%d", &customerID);
    printf("Enter transaction type (1 for withdrawal, 2 for deposit): ");
    scanf("%d", &transactionType);
    printf("Enter transaction amount: ");
    scanf("%f", &amount);

    updateBalance(balances,customerID,transactionType,amount);
    return 0;

}