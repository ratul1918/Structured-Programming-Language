#include <stdio.h>

#define NUM_CUSTOMERS 5

void updateBalance(float balances[], int customerID, int transactionType, float amount) {
    if (transactionType == 1) {
        if (balances[customerID] >= amount) {
            balances[customerID] -= amount;
            printf("Transaction successful. Updated balance: %.2f\n", balances[customerID]);
        } else {
            printf("Not sufficient balance\n");
        }
    } else if (transactionType == 2) {
        balances[customerID] += amount;
        printf("Transaction successful. Updated balance: %.2f\n", balances[customerID]);
    } else {
        printf("Invalid transaction type\n");
    }
}

int main() {
    float balances[NUM_CUSTOMERS];
    int customerID, transactionType;
    float amount;
    
    printf("Enter the initial balances of 100 customers:\n");
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        printf("Customer %d: ", i);
        scanf("%f", &balances[i]);
    }
    
    printf("Enter customer ID (0 to 99): ");
    scanf("%d", &customerID);
    if (customerID < 0 || customerID >= NUM_CUSTOMERS) {
        printf("Invalid customer ID.\n");
        return 1;
    }

    printf("Enter transaction type (1 for withdrawal, 2 for deposit): ");
    scanf("%d", &transactionType);
    
    printf("Enter transaction amount: ");
    scanf("%f", &amount);
    
    updateBalance(balances, customerID, transactionType, amount);

    return 0;
}
