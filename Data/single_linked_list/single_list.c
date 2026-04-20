// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

struct link_list_eg
{
    int a;
    struct link_list_eg *node;
};
int main() {
    // Write C code here
    // printf("Try programiz.pro");
    struct link_list_eg *Head = NULL;
    struct link_list_eg *Next = NULL;
    struct link_list_eg *Tail = NULL;
    
    Head = (struct link_list_eg*)malloc(sizeof(struct link_list_eg));
    Next = (struct link_list_eg*)malloc(sizeof(struct link_list_eg));
    Tail = (struct link_list_eg*)malloc(sizeof(struct link_list_eg));
    
    Head->a = 10;
    Head->node = Next;
    Next->a = 20;
    Next->node = Tail;
    Tail->a = 30;
    Tail->node = NULL;
    printf("%d\n",Head->a);
    printf("%d\n",Head->node);
    printf("%d\n",Next->a);
    printf("%d\n",Next->node);
    printf("%d\n",Tail->a);
    printf("%d\n",Tail->node);
    return 0;
}