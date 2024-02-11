#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    int id;
    char name[10];
    struct student *next;
} student;

struct student *head;


int print_all()
{
    struct student *qe;
    qe = head->next;
    printf("\n");
    while (qe != NULL)
    {
        printf("%5d, %s\n", qe->id, qe->name);
        qe = qe->next;
    }
}


int sort()
{
    struct student *qw, *qe, *qt, *qr;  // qr 为中间变量
    int stu_count = 0;                  // 记录有多少个结点（头结点除外）


    qe = head->next;
    while (qe != NULL)
    {
        stu_count++;
        qe = qe->next;
    }
    printf("\nstu_count: %d\n", stu_count);


    for (int i = 0; i < stu_count - 1; i++)
    {
        // 复位 
        qw = head;
        qe = head->next;
//        qt = qe->next;
        qt = head->next->next; 

        while (qe->next != NULL)
        {
            if (qe->id > qt->id)
            {
                // 调换结点
                qe->next = qt->next;
                qt->next = qe;
                qw->next = qt;

                // 复位 
                qr = qe;
                qe = qt;
                qt = qr;
            }
            else
            {
                qw = qw->next;
                qe = qe->next;
                qt = qt->next;
            }
        }
    }
}


int main(void)
{
    // 录入
    int count = 0;
    struct student *qe, *qt;

    head = qe = (struct student*)malloc(sizeof(struct student));
    qe->next = NULL;
    
    printf("输入学生人数：");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        qt = (struct student*)malloc(sizeof(struct student));
        qt->next = NULL;
        printf("%3d Student ID: ", i);
        scanf("%d", &qt->id);
        strcpy(qt->name, "Name!");
        qe->next = qt;
        qe = qe->next;
    }

    // 排序前
    print_all();

    sort();

    // 排序后
    print_all();

}
