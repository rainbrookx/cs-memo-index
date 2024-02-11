// C语言颜色3.c
#include <stdio.h>
#include <windows.h>

int color(int x)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);
}

int main()
{
/*
【16进制色】0xab（0x：16进制，a背景色，b字体色） 
0 = 黑色		1 = 蓝色		2 = 淡绿		3 = 湖蓝
4 = 红色		5 = 紫色		6 = 黄色		7 = 白色
8 = 灰色		9 = 蓝色		A = 绿色		B = 淡浅绿
C = 浅红		D = 淡紫		E = 淡黄		F = 亮白
*/
	for (int i = 0; i < 16; i++)
	{
		color(i);
		printf("(%d) hello, world\n", i);
	}
	
	
}


