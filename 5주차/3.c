//학생들이 점수를 입력받다가 0이 입력되면 그 때가지 입력받은 점수를 10점 단위로 구분하여
//점수대별 학생 수를 출력하는 프로그램을 작성해줘(한 명도 없는 점수는 출력 x)

#include <stdio.h>

int main()
{
    int score;
    int cnt[11] = {0};

    while (1)
    {
        scanf("%d", &score);

        if (score == 0)
            break;

        cnt[score / 10]++;
    }

    for (int i = 10; i >= 0; i--)
    {
        if (cnt[i] > 0)
            printf("%d : %d person\n", i * 10, cnt[i]);
    }

    return 0;
}