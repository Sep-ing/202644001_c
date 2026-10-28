
#include <stdio.h>

int main()
{
    double width, height, area;
    char ch;

    while (1) {
        scanf("%lf %lf", &width, &height);

        area = width * height / 2;

        printf("Triangle area = %.1f\n", area);
        printf("Continue? ");

        scanf(" %c", &ch);

        if (ch != 'Y' && ch != 'y') {
            break;
        }
    }

    return 0;
}
