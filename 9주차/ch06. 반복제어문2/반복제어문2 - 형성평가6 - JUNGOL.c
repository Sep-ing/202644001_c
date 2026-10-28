#include <stdio.h>

int main()
{
    int a, b, i, temp;
    int sum = 0, cnt = 0;
    double avg;

    scanf("%d %d", &a, &b);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    for (i = a; i <= b; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
            cnt++;
        }
    }

    avg = (cnt > 0) ? (double)sum / cnt : 0.0;

    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
