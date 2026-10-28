#include <stdio.h>

int main()
{
    int num, i, cnt = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            cnt++;
        }
    }

    printf("Even numbers = %d", cnt);

    return 0;
}
