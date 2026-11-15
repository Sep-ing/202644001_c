//다음 C 프로그램의 실행 결과로 올바른 것은?

#include <stdio.h>

struct Person {
    char name[20];
    int age;
};

int main(void)
{
    struct Person p1 = {"Alice", 30};
    struct Person p2;

    p2 = p1;
    p2.name[0] = 'M';
    p2.age = 20;

    printf("%s %d\n", p1.name, p1.age); //1
    printf("%s %d\n", p2.name, p2.age); //2

    return 0;
}

// A 1: Alice 30 / 2: Mlice 20
// B 1: Mlice 20 / 2: Mlice 20
// C 1: Alice 30 / 2: Alice 20
// D 1: Mlice 30 / 2: Mlice 20
// 정답 : A






