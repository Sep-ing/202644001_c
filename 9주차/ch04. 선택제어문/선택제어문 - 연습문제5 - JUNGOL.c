#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a >= 4 && b >= 4) {
        printf("WIN.");
    }
    else if (a < 4 && b < 4) {
        printf("LOSE.");
    }
    else {
        printf("DRAW.");
    }

    return 0;
}
