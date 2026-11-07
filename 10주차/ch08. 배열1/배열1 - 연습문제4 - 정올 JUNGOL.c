#include <stdio.h>

int main()
{
    int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int month;

    while (1) {
        scanf("%d", &month);

        if (month < 1 || month > 12) {
            break;
        }

        printf("%d\n", days[month - 1]);
    }

    return 0;
}
