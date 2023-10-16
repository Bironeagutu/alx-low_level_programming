#include <stdio.h>

void reset_to_98(int *n) {
    *n = 98;
}

int main() {
    int number = 10;
    printf("Original value: %d\n", number);

    // Pass the address of 'number' to the function
    reset_to_98(&number);

    printf("Value after reset_to_98 function: %d\n", number);
    return 0;
}

