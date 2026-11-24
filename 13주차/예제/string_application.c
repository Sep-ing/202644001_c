#include <stdio.h>
#include <string.h>

void print_reverse(char *s)
{
    size_t len = strlen(s);
    char *t = s + len;

    while (t > s) {
        t = t - 1;
        printf("%c", *t);
    }
    puts("");
}

int main(void)
{
    char str[] = "HELLO";

    print_reverse(str);

    return 0;
}
