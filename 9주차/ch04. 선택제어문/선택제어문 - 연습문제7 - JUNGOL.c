#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    switch (num) {
        case 1:
            printf("You selected ADD.");
            break;
        case 2:
            printf("You selected EDIT.");
            break;
        case 3:
            printf("You selected DEL.");
            break;
    }

    return 0;
}
