#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if (a == 0) {
        printf("Zero");
    }
    else if (a>0) {
        printf("plus");
    }
    else {
        printf("minus");
    }

    return 0;
}
