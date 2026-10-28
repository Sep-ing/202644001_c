#include <stdio.h>

int main()
{
    int num, odd = 0, even = 0;

    while (1) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        if (num % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }

    printf("odd : %d\n", odd);
    printf("even : %d\n", even);

    return 0;
}
