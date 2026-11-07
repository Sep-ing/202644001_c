#include <stdio.h>

int main()
{
    int arr[11] = {0};
    int score;

    while (1) {
        scanf("%d", &score);

        if (score == 0) {
            break;
        }

        arr[score / 10]++;
    }

    for (int i = 10; i >= 0; i--) {
        if (arr[i] > 0) {
            printf("%d : %d\n", i * 10, arr[i]);
        }
    }

    return 0;
}
