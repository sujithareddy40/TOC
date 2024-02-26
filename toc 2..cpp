#include <stdio.h>
#include <stdbool.h>

short transition(short s, char c) {
    switch(s) {
        case 0: return c == '0' ? 1 : -1;
        case 1: return c == '0' ? 1 : (c == '1' ? 2 : -1);
        case 2: return (c == '0' || c == '1') ? 2 : -1;
        default: return -1;
    }
}

bool simulate(char *s) {
    short state = 0;
    for(int i = 0; s[i] != '\0'; ++i) {
        state = transition(state, s[i]);
        if(state == -1) return false;
    }
    return state == 2;
}

int main() {
    char s[100];
    printf("Enter string: ");
    scanf("%s", s);
    printf(simulate(s) ? "Accepted\n" : "Rejected\n");
    return 0;
}
