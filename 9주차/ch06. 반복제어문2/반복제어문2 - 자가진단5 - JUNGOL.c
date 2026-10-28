#include <stdio.h>

int main()
{
    int num, i, cnt3 = 0, cnt5 = 0;

    for (i = 1; i <= 10; i++) {
        scanf("%d", &num);

        if (num % 3 == 0) {
            cnt3++;
        }

        if (num % 5 == 0) {
            cnt5++;
        }
    }

    printf("Multiples of 3 : %d\n", cnt3);
    printf("Multiples of 5 : %d\n", cnt5);

    return 0;
}
