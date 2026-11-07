#include <stdio.h>

int main()
{
    double arr[6];
    double sum = 0, avg;

    for (int i = 0; i < 6; i++) {
        scanf("%lf", &arr[i]);
        sum += arr[i];
    }

    avg = sum / 6.0;

    printf("%.1f", avg);

    return 0;
}
