#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    switch (ch) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Usually");
            break;
        default:
            printf("error");
            break;
    }

    return 0;
}
