#include <stdio.h>
#include <stdint.h>

uint8_t main(void)
{
    uint8_t arr[] = {7,4,50,6,9};
    uint8_t size = sizeof(arr)/sizeof(arr[0]);
    uint8_t i,j,sec_lar = 0,count;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                count++;
                if(count == 1 && sec_lar < arr[i])
                {
                    sec_lar = arr[i];
                }
            }
            else
            {
                count = 0;
            }
        }
        count = 0;
    }
    printf("sec_large : %d\n",sec_lar);
    return 0;
}