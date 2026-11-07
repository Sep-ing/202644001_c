#include <stdio.h>

int main()
{
    int arr[10];
    int oddSum = 0, evenSum = 0;

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            oddSum += arr[i];
        }
        else {
            evenSum += arr[i];
        }
    }

    printf("odd : %d\n", oddSum);
    printf("even : %d\n", evenSum);

    return 0;
}
