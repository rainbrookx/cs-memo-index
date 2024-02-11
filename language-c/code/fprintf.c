// 文本文件读写
#include <stdio.h>

int main(void)
{
    FILE *pFile = NULL;
    char *fileName = "student.txt";
    char name[3][10];

    
    if (!(pFile = fopen(fileName, "w")))
    {
        printf("读取文件失败！\n");
    }

    

    for (int i = 0; i < 3; ++i)
    {
        printf("INPUT-%d-: ", i + 1);
        scanf("%s", name[i]);
    }

    // 格式化写入
    for (int i = 0; i < 3; ++i)
    {
        fprintf(pFile, "%s\n", name[i]);
    }

    fclose(pFile);
    pFile = NULL;
}