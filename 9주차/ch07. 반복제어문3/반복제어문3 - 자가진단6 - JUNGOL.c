#include <stdio.h>

int main()
{
    int n, i, j, num = 1;
    char ch = 'A';

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n - i + 1; j++) {
            printf("%d ", num);
            num++;
        }

        for (j = 1; j <= i; j++) {
            printf("%c", ch);
            ch++;

            if (j < i) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
