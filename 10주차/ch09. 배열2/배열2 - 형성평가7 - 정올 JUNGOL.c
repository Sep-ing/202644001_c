#include <stdio.h>

int main()
{
    int arr[4][2];
    int sum, total = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            total += arr[i][j];
        }
    }

    for (int i = 0; i < 4; i++) {
        sum = 0;

        for (int j = 0; j < 2; j++) {
            sum += arr[i][j];
        }

        printf("%d ", sum / 2);
    }
    printf("\n");

    for (int j = 0; j < 2; j++) {
        sum = 0;

        for (int i = 0; i < 4; i++) {
            sum += arr[i][j];
        }

        printf("%d ", sum / 4);
    }
    printf("\n");

    printf("%d\n", total / 8);

    return 0;
}
