#include <stdio.h>

int main()
{
    int arr[5][4];
    int sum;
    double avg;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 5; i++) {
        sum = 0;

        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }

        avg = sum / 4.0;

        printf("%d %.1f\n", sum, avg);
    }

    return 0;
}
