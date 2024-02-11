#include <stdio.h>
#include <iostream>
#define COUNT 1

struct person {
    int a;
    int b;
};

struct person1 {
    char num[10];
    int b;
};

int fun1(void);
int fun2(void);


int main(void) {
//    struct person tom;
//    tom.a = 10;
//    tom.b = 20;
//    
//    printf("%d\n", tom);
//    printf("%p\n", &tom);
//    printf("%p\n", &tom.a);
    

//    fun1();
    fun2();


}


int fun1(void)
{
    // 第一个成员是 int
    printf("第一个成员是 int\n");
    struct person stu[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        printf("a:");
        scanf("%d", &stu[i].a);
        printf("b:");
        scanf("%d", &stu[i].b);
    }

    for (int i = 0; i < COUNT; i++)
    {
        printf(">>%d>>\n", stu[i]);
        printf("%d  %d\n", stu[i].a, stu[i].b);
    }
    
    return 0;
}

int fun2(void)
{
    // 第一个成员是 char*
    printf("\n\n第一个成员是 char*\n");
    struct person1 stu1[COUNT];
    for (int i = 0; i < COUNT; i++)
    {
        printf("num:");
        scanf("%s", stu1[i].num);
        printf("b:");
        scanf("%d", &stu1[i].b);
    }

    for (int i = 0; i < COUNT; i++)
    {
        printf(">>%%d %d>>\n", stu1[i]);
        printf(">>%%s %s>>\n", stu1[i]);
        printf("%s  %d\n", stu1[i].num, stu1[i].b);
    }
    return 0;
}

