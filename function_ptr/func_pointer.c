#include <stdio.h>
typedef void (*ISR_Callback)(void);
void myISR(void) {
    printf("ISR Callback\n");
    }

int main(void) {
    
    ISR_Callback cb = myISR;
    cb();

    return 0;
}