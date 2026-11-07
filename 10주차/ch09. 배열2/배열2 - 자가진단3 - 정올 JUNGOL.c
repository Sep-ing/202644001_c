#include <stdio.h>

int main()
{
    int arr[100];
    int n;

    scanf("%d", &n);

    arr[0] = 100;
    arr[1] = n;

    for (int i = 2; i < 100; i++) {
        arr[i] = arr[i - 2] - arr[i - 1];

        if (arr[i] < 0) {
            break;
        }
    }

    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);

        if (arr[i] < 0) {
            break;
        }
    }

    return 0;
}
