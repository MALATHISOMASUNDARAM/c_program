#include <stdio.h>

void findIndexes(char *str, char *sub) {
    int i, j, len = 0, start = 0;
    // Find length of sub
    for (len = 0; sub[len] != '\0'; len++);

    printf("Indexes where '%s' starts: ", sub);
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == sub[0]) {
            for (j = 0; j < len && str[i+j] == sub[j]; j++);
            if (j == len) printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    char str[] = "Hello, welcome to the welcomeworld of C programmingwelcome";
    char sub[] = "welcome";
    findIndexes(str, sub);
    return 0;
}