#include <stdio.h>
#include <stdbool.h>

bool S(char *input) {
    if (*input == '\0') return true; // epsilon production
    if ((*input == '0' || *input == '1') && S(input + 1) && *input == *(input + 1)) return true;
    if (*input == '0' || *input == '1') return true;
    return false;
}

int main() {
    char input[100];
    printf("Enter the string to check: ");
    scanf("%s", input);

    if (S(input)) printf("String belongs to the language.\n");
    else printf("String does not belong to the language.\n");

    return 0;
}

