//세 개의 지연수 A,B,C가 주어질 때 A * B * C를 계산한 결과에 0부터 9까지 각각의 숫자가 몇 번씩 쓰였는지를 구하는 프로그램을 작성
#include <stdio.h>

int main()
{
    int A, B, C;
    int result;
    int cnt[10] = {0};

    scanf("%d %d %d", &A, &B, &C);

    result = A * B * C;

    while (result > 0)
    {
        cnt[result % 10]++;
        result = result / 10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d : %d번\n", i, cnt[i]);
    }

    return 0;
}