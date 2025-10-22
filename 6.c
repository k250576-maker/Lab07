#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, con = 0;
    printf("Enter a word: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
        else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            con++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", con);

    return 0;
}