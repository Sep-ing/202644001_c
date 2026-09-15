#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d", &a);
    scanf("%d", &b);

    temp = b;

    while (temp != 0) //temp >0  둘 다 사용 가능
    {
        printf("%d\n", a * (temp % 10));
        temp /= 10;
    }
    printf("%d", a*b);
}