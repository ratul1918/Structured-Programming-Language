#include <stdio.h>

/*
    Write a C program that determines whether an entity name poses a cyber threat.
    The program should:
    1. Read an entity name (string) and a threat level (integer) from input.
    2. Check if the entity name is valid:
        - Starts with an uppercase letter (A-Z),
        - Contains only uppercase letters, lowercase letters, or digits,
        - Does not contain special characters like @, #, $, %, ^, &, *,
        - Ends with a lowercase letter (a-z).
    3. If the entity is valid and the threat level is greater than 50, it is a cyber threat.
    4. Print "Danger !!" if it is a cyber threat; otherwise, print "Safe.".
*/

int main() {
    char str[50];
    gets(str);  // Note: gets() is unsafe, consider using fgets() instead
    int Level;
    scanf("%d", &Level);

    if (isCyberThreat(str, Level)) {
        printf("Danger !!\n");
    } else {
        printf("Safe.\n");
    }
    return 0;
}

char getLastChar(char str[]) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return str[len - 1];
}

int isValidEntity(char *entityName) {
    if (!(entityName[0] >= 65 && entityName[0] <= 90)) {
        return 0;
    }

    int i = 0;
    while (entityName[i] != '\0') {
        if (!((entityName[i] >= 65 && entityName[i] <= 90) ||
              (entityName[i] >= 97 && entityName[i] <= 122) ||
              (entityName[i] >= '0' && entityName[i] <= '9'))) {
            return 0;
        }
        i++;
    }

    char last_char = getLastChar(entityName);
    if (!(last_char >= 97 && last_char <= 122)) {
        return 0;
    }

    i = 0;
    while (entityName[i] != '\0') {
        if ((entityName[i] == '@' || entityName[i] == '#' || entityName[i] == '$' ||
             entityName[i] == '%' || entityName[i] == '^' || entityName[i] == '&' ||
             entityName[i] == '*')) {
            return 0;
        }
        i++;
    }
    return 1;
}

int isCyberThreat(char *entityName, int threatLevel) {
    if ((isValidEntity(entityName)) && (threatLevel > 50)) {
        return 1;
    } else {
        return 0;
    }
}
