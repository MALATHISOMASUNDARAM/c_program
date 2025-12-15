
#include <stdio.h>
#include <stdint.h>

typedef struct {
    uint8_t f;       
    double c;    
    char b;      
    char e;      
    uint8_t a;       
} find_size;

typedef union
{
    uint8_t mem_access;
    struct {
    uint8_t a:2;       
    uint8_t b:2;    
    uint8_t c:2;
    uint8_t d:2;
    }bit_field;       
} find_union_size;

uint8_t main(void) {
    find_size size_st;
    printf("Size of struct: %zu bytes\n", sizeof(size_st));
    find_union_size union_size_st;
    printf("Size of union: %zu bytes\n", sizeof(union_size_st));
    return 0;
}