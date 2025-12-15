#include <stdio.h>
#include <stdint.h>

uint8_t main(void)
{
    uint8_t value = 25;
    uint8_t pos = 4;
    uint8_t high = 0x12, low = 0x34;

    /*Set the bit*/
    value |= (1<<pos);
    printf("Set bit: %d\n",value);

    /*Clear the bit*/
    value &= ~(1<<pos);
    printf("Cleared bit: %d\n",value);

    /*Extract the bit*/
    if(value & (1<<pos))
    {
        printf("Bit is set\n");
    }
    else
    {
        printf("Bit is clear\n");
    }
    
    /*Toggle the bit*/
    value ^= (1<<pos);
    printf("Toggled bit: %d\n",value);

    /*Lsh*/
    uint16_t packed = ((uint16_t)high << 8) | (uint16_t)low;
    printf("Packed: 0x%X\n",packed);

    /*Rsh*/
    uint8_t unpack_high = (uint8_t)(packed >> 8);
    uint8_t unpack_low  = (uint8_t)(packed & 0xFF);
    printf("Unpacked: high=0x%X, low=0x%X\n", unpack_high, unpack_low);


    return 0;
}