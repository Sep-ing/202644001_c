#include <stdio.h>

int main()
{
    int n, num, i, sum = 0;
    double avg;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &num);
        sum += num;
    }

    avg = (double)sum / n;

    printf("avg : %.1f\n", avg);

    if (avg >= 80) {
        printf("pass");
    }
    else {
        printf("fail");
    }

    return 0;
}
