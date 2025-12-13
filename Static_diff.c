#include <stdio.h>
#include <stdint.h>

static uint8_t res = 0;  // global scope
uint8_t local_scope(void)
{
    static uint8_t a = 10;  // Inside a function
    a++;
    return a;
}

void global_scope(void)
{
    res = local_scope();
    printf("\nValue : %d\n", res);
}

uint8_t main(void)
{
    res = local_scope();
    printf("Value : %d", res);
    global_scope();

    return 0;
}