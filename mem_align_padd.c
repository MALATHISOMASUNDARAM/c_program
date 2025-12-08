
#include <stdio.h>

typedef struct {
    int f;       
    double c;    
    char b;      
    char e;      
    int a;       
} find_size;

int main(void) {
    find_size size_st;
    printf("Size of struct: %zu bytes\n", sizeof(size_st));
    return 0;
}