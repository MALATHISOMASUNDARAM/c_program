#include <stdio.h>
#include <stdint.h> 

void rev_str(char *str)
{
    char *temp = str;
    char *temp1 = str;
    while(*temp != '\0')
    {
        temp++;
    }
    temp--;
    while(temp1<temp)
    {
        char s = *temp;
        *temp = *temp1;
        *temp1 = s;
        temp--;
        temp1++;
    }
}

uint8_t main(void)
{
    char str[] = "Hello_World";
    printf("%s\n",str);
    rev_str(str);
    printf("%s\n",str);
    return 0;
}