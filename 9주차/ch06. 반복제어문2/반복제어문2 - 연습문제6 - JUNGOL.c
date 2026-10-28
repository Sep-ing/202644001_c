#include <stdio.h>

int main()
{
    int num, i, sum = 0;
    double avg;

    for (i = 1; i <= 5; i++) {
        scanf("%d", &num);
        sum += num;
    }

    avg = (double)sum / 5;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
