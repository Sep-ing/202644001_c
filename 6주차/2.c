#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)   // 행
    {
        for (int j = 1; j <= i; j++)   // 현재 행 번호만큼 별 출력 j=0이면 j<i
        {
            printf("*");
        }

        printf("\n");   // 한 줄 출력 후 줄바꿈
    }

    return 0;
}