// 单链表1-手动操作.c
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int a;
    struct node *next;
} node;


int main(void)
{
    node *n1 = (node*)malloc(sizeof(node));
    node *n2 = (node*)malloc(sizeof(node));
    node *n3 = (node*)malloc(sizeof(node));
    node *p;

    n1->a = 1;
    n2->a = 2;
    n3->a = 3;

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    p = n1;
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", p->a);
        p = p->next;
    }

    return 0; 

}
