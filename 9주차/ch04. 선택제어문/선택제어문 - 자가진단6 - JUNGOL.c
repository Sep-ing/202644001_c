#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num > 0 && num % 2 == 0) {
        printf("Even Number");
    }
    else if (num > 0 && num % 2 != 0) {
        printf("Odd Number");
    }
    else {
        printf("Non positive");
    }

    return 0;
}
