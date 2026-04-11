#include <stdio.h>

int main() {
    char str[] = "Malathi";
    char str1[] = "thiaalM";
    int freq[256] = {0};
    int freq1[256] = {0};

    int i = 0;
    while(str[i]) {
        freq[(unsigned char)str[i]]++;
        freq1[(unsigned char)str1[i]]++;
        i++;
    }

    int anagram = 1;
    for(i=0; i<256; i++) {
        if(freq[i] != freq1[i]) {
            anagram = 0;
            break;
        }
    }

    if(anagram) printf("Anagram\n");
    else printf("Not Anagram\n");

    return 0;
}