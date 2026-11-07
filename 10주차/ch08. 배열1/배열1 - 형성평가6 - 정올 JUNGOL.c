#include <stdio.h>

int main()
{
    int arr[100];
    int count = 0, sum = 0;
    double avg = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 0) {
            break;
        }

        if (arr[i] % 5 == 0) {
            count++;
            sum += arr[i];
        }
    }

    if (count > 0) {
        avg = (double)sum / count;
    }

    printf("Multiples of 5 : %d\n", count);
    printf("sum : %d\n", sum);
    printf("avg : %.1f\n", avg);

    return 0;
}
