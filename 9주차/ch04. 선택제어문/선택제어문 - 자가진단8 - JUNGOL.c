#include <stdio.h>

int main()
{
    double num;
    scanf("%lf", &num);

    if (num >= 4.0) {
        printf("scholarship");
    }
    else if (num >= 3.0) {
        printf("next semester");
    }
    else if (num >= 2.0) {
        printf("seasonal semester");
    }
    else {
        printf("retake");
    }

    return 0;
}
