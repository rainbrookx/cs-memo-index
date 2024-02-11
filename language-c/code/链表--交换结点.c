#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    int id;
    char name[10];
    struct student *next;
} student;
struct student *head;


int main(void)
{
    student *qw, *qe, *qt;
    head = qe = (student*)malloc(sizeof(student));
    qe->next = NULL;
    for (int i = 1; i <= 4; i++)    // 四个结点 
    {
        qt = (student*)malloc(sizeof(student));
        qt->next = NULL;
        qt->id = i;
        strcpy(qt->name, "name!");
        qe->next = qt;
        qe = qe->next;
    }

    // 交换前，打印所有
    qe = head->next;
    while (qe != NULL)
    {
        printf("%d, %s\n", qe->id, qe->name);
        qe = qe->next;
    }

    // 交换节点测试：开始位置 
    qw = head;
    qe = head->next;
    qt = qe->next;

    // 往后移动一个结点 
    qw = qw->next;
    qe = qe->next;
    qt = qt->next;

    // 交换结点（手动交换）
    qe->next = qt->next;
    qt->next = qe;
    qw->next = qt;

    // 交换后，打印所有
    printf("\n");
    qe = head->next;
    while (qe != NULL)
    {
        printf("%d, %s\n", qe->id, qe->name);
        qe = qe->next;
    }

}
