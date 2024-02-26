#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool S(char *s) {
    if (s[0] == '0' && s[strlen(s) - 1] == '0') {
        if (strlen(s) == 2) return true;
        char t[strlen(s) - 2];
        strncpy(t, s + 1, strlen(s) - 2);
        t[strlen(s) - 2] = '\0';
        return S(t);
    } else return s[0] == '1' ? (s[1] == '\0' ? true : S(s + 1)) : s[0] == '\0';
}

int main() {
    char input[100];
    printf("Enter input string: ");
    scanf("%s", input);
    printf(S(input) ? "String belongs to the language.\n" : "String does not belong to the language.\n");
    return 0;
}

