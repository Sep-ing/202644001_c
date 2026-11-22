#include <stdio.h>

struct Person {
    char name[30];
    int age;
};

int main() {
    struct Person p;

    scanf("%29s", p.name); // 주소라서 & 안 붙임
    scanf("%d", &p.age);   // & 붙여야 함

    printf("Your name is %s and you are %d years old.", p.name, p.age);

    return 0;
}
