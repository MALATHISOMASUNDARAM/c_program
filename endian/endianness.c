#include <stdio.h>
#include <stdint.h>

void main(void)
{
    uint16_t value = 0x1234;
    uint8_t *ptr = (uint8_t *)&value;
    if((value & 0xFF) == 34)
    {
        printf("Little Endian\n");
    }
    else{
        printf("Big Endian\n");
    }
}