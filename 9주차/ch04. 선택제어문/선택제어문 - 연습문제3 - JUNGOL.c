#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num >=80) {
        printf("Passed.");
    }
    else {
        printf("Failed.");
    }

    return 0;
}
