#include <stdio.h>

int main()
{
    int n, i, j, num = 0;
    char ch = 'A';

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i + 1; j++) {
            printf("%c", ch);
            ch++;

            if (j < n) {
                printf(" ");
            }
        }

        for (j = 1; j < i; j++) {
            printf("%d", num);
            num++;

            if (j < i - 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
