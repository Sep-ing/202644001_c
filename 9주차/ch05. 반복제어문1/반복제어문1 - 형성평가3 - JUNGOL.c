#include <stdio.h>

int main()
{
    int num, sum = 0, cnt = 0;
    double avg;

    while (1) {
        scanf("%d", &num);

        if (num < 0 || num > 100) {
            break;
        }

        sum += num;
        cnt++;
    }

    avg = (cnt > 0) ? (double)sum / cnt : 0.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
