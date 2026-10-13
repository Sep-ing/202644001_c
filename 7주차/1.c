
#include <stdio.h>

int main()
{
    int i = 5;
    int *p;

    p = &i;

    printf("%d\n", (*p)++);

    printf("%d\n", (*p)+1);

    printf("%d\n", *p+=1);

    printf("%d\n", (*p)+=1);

    printf("%d\n", *p=*p+1);

    printf("%d\n", ++*p);

    printf("%d\n", ++(*p));

    return 0;
}
