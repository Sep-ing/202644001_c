#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    switch (num / 10) {
        case 10:
        case 9:
            printf("Excellent");
            break;
        case 8:
            printf("Good");
            break;
        case 7:
            printf("Pass");
            break;
        case 6:
            printf("Fail");
            break;
        default:
            printf("Fail");
            break;
    }

    return 0;
}
