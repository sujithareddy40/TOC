#include <stdio.h>

#define S 3 // States
#define A 2 // Alphabet

int T[S][A] = {
    {1, 2}, {1, 2}, {1, 2}
};

int D(char *i) {
    int s = 0;
    for (int j = 0; i[j] != '\0'; ++j) {
        int a;
        if (i[j] == 'a') a = 0;
        else if (i[j] == 'b') a = 1;
        else { printf("Invalid input '%c'\n", i[j]); return 0; }
        s = T[s][a];
    }
    return s == 1;
}

int main() {
    char i[100];
    printf("Enter input: ");
    scanf("%s", i);
    printf(D(i) ? "Accepted\n" : "Not Accepted\n");
    return 0;
}
