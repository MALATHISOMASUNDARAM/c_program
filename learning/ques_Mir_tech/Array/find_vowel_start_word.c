#include <stdio.h>

int is_vowel(char c) {
    char vowels[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++) {
        if (c == vowels[i]) return 1;
    }
    return 0;
}

int main() {
    char *arr[] = {"Namakkal", "salem", "coimbatore", "Erode", "karur"};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Words starting with vowels: ");
    for (int i = 0; i < n; i++) {
        if (is_vowel(arr[i][0])) {
            printf("%s ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}