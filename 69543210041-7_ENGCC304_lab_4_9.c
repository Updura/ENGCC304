#include <stdio.h>
int main() {
    char ch;
    scanf(" %c", &ch);
    switch (ch) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;
        default:
            printf("Consonant");
    }
    return 0;
}