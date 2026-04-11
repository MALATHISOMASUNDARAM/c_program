/* find missing number in a array which has sequence of numbers only as 1,2,3,5 so 4 is missing need to
 find missing element as 4, if 5,6,7,9 need to find 8 is missing */

 #include <stdio.h>
 #include <stdint.h>

 uint8_t main(void)
 {
    uint8_t arr[] = {3,4,6,7};
    uint8_t i, size = sizeof(arr)/sizeof(arr[0]),sum=0,sum1=0,miss_elem =0;
    /*sum of element*/
    for(i = 0;i<=size;i++)
    {
        sum += (arr[0]+i);
    }
    for(i = 0;i<size;i++)
    {
        sum1 += arr[i];
    }
    miss_elem = sum - sum1;
    printf("sum : %d\nsum1 : %d\nmissing element : %d\n", sum, sum1, miss_elem);
    return 0;
 }
