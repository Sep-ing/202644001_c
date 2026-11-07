#include <stdio.h>

int main()
{
    int arr[3][3];
    int sum[3] = {0};
    int total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        int studentSum = 0;

        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
            studentSum += arr[i][j];
            sum[j] += arr[i][j];
        }

        printf("%d\n", studentSum);
        total += studentSum;
    }

    for (int i = 0; i < 3; i++) {
        printf("%d ", sum[i]);
    }

    printf("%d\n", total);

    return 0;
}
