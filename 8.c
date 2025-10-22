#include <stdio.h>
int main() {
    char str[100];

    printf("Enter a string (non-alphabetic characters only): ");
    scanf("%[^A-Za-z]", str);

    printf("You entered non-alphabetic characters: %s\n", str);

    return 0;
}   