#include <stdio.h>

int main() {
    int number = 42;
    char character = 'A';

    // Your _printf function
    _printf("This is a number: %d\n", number);
    _printf("This is a character: %c\n", character);

    // Standard printf
    printf("This is a number: %d\n", number);
    printf("This is a character: %c\n", character);

    return 0;
}
