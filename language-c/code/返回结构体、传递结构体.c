// 返回结构体、传递结构体.c
#include <stdio.h>
#include <string.h> 

struct dog
{
    char name[10];
    int age;
};

struct dog fun1();      // 返回结构体 
int fun2(struct dog);   // 传递结构体（参数使用结构体） 


int main(void)
{
	// 返回结构体 
	struct dog a;
	a = fun1();
	printf("fun1:\na = %x\n", a);
    printf("%s || %d\n", a.name, a.age);
    
    // 传递结构体（参数使用结构体） 

    fun2(a);

}


struct dog fun1()
{
    struct dog tom;
    strcpy(tom.name, "Tom");
    tom.age = 10;
    return tom;
}


int fun2(struct dog x)
{
    printf("fun1:\nx = %x\n", x);
    printf("%s || %d\n", x.name, x.age);

    return 0;
}
