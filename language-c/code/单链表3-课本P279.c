#include <stdio.h>
#include <stdlib.h>
#define LEN sizeof(stuNode)

typedef struct stuNode
{
    char id[8];
    char name[8];
    float sEn, sCpu;
    struct stuNode *next;
} stuNode;



// 尾插法
stuNode *Create_StuList(int n)
{
    int i;
    stuNode *head;
    stuNode *previous, *current;
    head = previous = (stuNode*)malloc(LEN);

    for (i = 1; i <= n; i++)
    {
        current = (stuNode*)malloc(LEN);
        current->next = NULL; 
        printf("输入：学号 姓名 英语 计算机 (以空格分隔)：\n");
        scanf("%s%s", current->id, current->name);
        scanf("%f%f", &current->sEn, &current->sCpu);

        previous->next = current;
        // 把previous指针指向当前current，就相当于把previous往后面移动1个结点
        previous = current; 
    }
    current->next = NULL;
    return head;
}

void ListStu(stuNode *headStu)
{
    int num = 0;
    stuNode *p;
    p = headStu->next;
    while (p != NULL)
    {
        printf("%d:%s %s %.1f %.1f\n", ++num, p->id, p->name,
                p->sEn, p->sCpu);
        p = p->next;
    }
}

int main(void)
{
	int x;
	printf("录入学生个数：");
	scanf("%d", &x);
    ListStu(Create_StuList(x));
}
