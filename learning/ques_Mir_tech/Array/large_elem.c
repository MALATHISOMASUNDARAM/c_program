#include <stdio.h>
#include <stdint.h>

void find_large_element(uint8_t *ptr, uint8_t size)
{
    uint8_t i,temp = *ptr;
    for(i = 1; i<size; i++)
    {
        if(temp < *(ptr + i))
        {
            temp = *(ptr + i);
        }
    }
    printf("Max value : %d\n",temp);
}

uint8_t main(void)
{
    uint8_t arr[] = {120,4,5,50,200};
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    find_large_element(arr, size);
    uint8_t i, temp = arr[0];
    // or

    /*for(i=1;i<size;i++)
    {
        if(temp<arr[i])
        {
            temp = arr[i];
        }
    }
    printf("Val : %d\n",temp);*/
    return 0;
}