#include <stdio.h>

int main()
{
    char ch;
    int i;

    scanf("%c", &ch);

    for (i = 1; i <= 20; i++) {
        printf("%c", ch);
    }

    return 0;
}
