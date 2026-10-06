#include <stdio.h>

int main()
{
    for (int i = 1; i < 5; i++)   // 행 
    {
        for (int j = 1; j <= 5; j++)   // 열
        {
            printf("*");
        }

        printf("\n");   // 한 행 출력 후 줄바꿈
    }

    return 0;
}