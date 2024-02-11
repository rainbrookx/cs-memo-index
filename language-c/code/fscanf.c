// 文本文件读写
#include <stdio.h>

int main(void)
{
    FILE *pFile = NULL;
    char *fileName = "student.txt";
    char name[3][10];


    if (!(pFile = fopen(fileName, "r")))
    {
        printf("读取文件失败！\n");
    }


    // 格式化读取
    rewind(pFile);
    for (int i = 0; i < 3; ++i)
    {
        fscanf(pFile, "%s", name[i]);
    }

    for (int i = 0; i < 3; ++i)
    {
        printf("%s\n", name[i]);
    }

    fclose(pFile);
    pFile = NULL;
}


