//다음 c 프로그램의 실행 결과로 올바른 것은?
#include <stdio.h>

int main(void)
{
    char *str = "Hello";
    char arr[] = "Array";

    str = "World";
    arr[0] = 'a';

    printf("%s\n", str); //1
    printf("%s\n", arr); //2

    return 0;
}

// A 1: World / 2: Array
// B 1: Hello / 2: array
// C 1: Hello / 2: Array
// D 1: World / 2: array
// 정답 : D