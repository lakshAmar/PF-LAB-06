#include <stdio.h>

int validatePIN(int stored, int entered) {
    if (stored == entered)
        return 1;
    return 0;
}

int main() {
    int pin = 4729;
    int input, i;
    int success = 0;

    printf("--- ATM Login ---\n");

    for (i = 1; i <= 3; i++) {
        printf("Enter PIN: ");
        scanf("%d", &input);

        if (validatePIN(pin, input)) {
            printf("Access granted. Welcome!\n");
            success = 1;
            break;
        }
        printf("Wrong PIN. %d tries left.\n", 3 - i);
    }

    if (success == 0)
        printf("Card blocked. Contact your bank.\n");

    return 0;
}
