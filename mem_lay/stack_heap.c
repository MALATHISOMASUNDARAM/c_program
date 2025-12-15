#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
void loc_func(uint8_t* ptr)
{
    uint8_t val = *ptr;  // stores in stack
    printf("%d\n",val);
}

void loc_func1(void)
{
    
    uint8_t *ptr = (uint8_t *)malloc(sizeof(uint8_t)); // allocated on heap
    *ptr = 10;
    printf("value: %d\n", *ptr);
    free(ptr); 
}

uint8_t main(void)
{
    uint8_t a = 5;
    loc_func(&a);
    loc_func1();
}
