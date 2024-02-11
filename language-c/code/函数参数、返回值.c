// 代码风格
/* 
fys notes

https://blog.csdn.net/yunyunyunpiao/article/details/103691820
空行，相当于写作文的分段
总体：导入头文件-->其它函数的声明-->主函数的定义-->其它函数的定义
函数的定义：声明变量-->语句（if for while 赋值 加减乘除 调用函数）-->
    return（void 是不需要 return 返回值）
function 函数。数学 f(x) 这个 f 就是 function 的首字母
下划线命名法，一般用于函数名
*/
#include <stdio.h>


// 声明 f 函数
int f(int x);// 一元二次函数 f(x) = x^2 + 3x + 1
// f(x)


int main(void)
{
    int a = 1;
    int b = 2;
    int x;
    int result;


    x = a + b;
    if (3 == x)
    {
        printf("x是3\n");        // 调用 printf 函数
    }
    else
    {
        printf("x不是3\n");
    }


    printf("一元二次函数 f(x) = x^2 + 3x + 1\n");
    printf("输入 x：");
    scanf("%d", &x);            // 调用 scanf 函数
    result = f(10);             // 调用 f 函数
    printf("f(x) 的结果：%d\n", result);

    return 0;
}


// 定义 f 函数
int f(int x)
{
    int y;
    y = x * x + 3 * x + 1;
    if (x == 0)
    {
    	return -1;
	}
    return y;
}
