//成员选择（指针） 运算符 ->
#include <stdio.h>
#include <string.h>
struct dog
{
    char name[20];
    int age;
};

int main(void)
{
    struct dog tom;
    struct dog *pdog = &tom;
    strcpy(tom.name, "Tom Dog");
    tom.age = 3;

    printf("%s\n", tom.name);
    printf("->: %x\n", tom.age);
    printf("->: %x\n", pdog->age);		// 等价： (*pdog).age
    printf("->: %x\n", (*pdog).age);
    printf("->: %x\n", (&tom)->age);
    printf("->: %x\n", &((&tom)->age));

    return 0;
}
