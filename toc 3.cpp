#include <stdio.h>
#include <stdbool.h>
bool parseS(char *input);
bool parseA(char *input);
bool parseS(char *input) {
    if (input[0] == '0' && parseA(input + 1) && input[1] == '1' && input[2] == '\0')
        return true;
    return false;
}
bool parseA(char *input) {
    if (input[0] == '0' && parseA(input + 1))
        return true;
    else if (input[0] == '1' && parseA(input + 1))
        return true;
    else if (input[0] == '\0')
        return true; // e transition
    return false;
}
int main() {
    char input[100];
    printf("Enter input string: ");
    scanf("%s", input);
    if (parseS(input))
        printf("String belongs to the language.\n");
    else
        printf("String does not belong to the language.\n");
    return 0;
}
