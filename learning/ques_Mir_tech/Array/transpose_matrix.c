// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int arr[2][3] = {{1,3,5},{2,4,6}};
    int transpose[3][2] = {0};
    // printf("%d\n",size);
    for(int i = 0; i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    for(int i = 0;i<2;i++)
    {
        for(int j = 0;j<3;j++)
        {
            printf("%d\n",transpose[j][i]);
        }
    }
    return 0;
}