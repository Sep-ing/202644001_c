//다음 C 프로그램의 실행 결과로 올바른 것은?

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char ch = 'a';

    printf("%d\n", isdigit(ch) ? 1 : 0);
    printf("%d\n", isxdigit(ch) ? 1 : 0);
    printf("%c\n", toupper(ch));

    return 0;
}
// A  0 -> 1 -> A
// B  0 -> 0 -> A
// C  0 -> 1 -> a
// D  1 -> 1 -> A

//정답 : A