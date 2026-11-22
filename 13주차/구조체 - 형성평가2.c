#include <stdio.h>
#include <string.h>

struct Person {
    char name[101];
    char tel[101];
    char addr[101];
};

int main() {
    struct Person p[3];
    int min = 0;

    for (int i = 0; i < 3; i++) {
        scanf("%100s %100s %100s", p[i].name, p[i].tel, p[i].addr);
    }

    for (int i = 1; i < 3; i++) {
        if (strcmp(p[i].name, p[min].name) < 0) {
            min = i;
        }
    }

    printf("name : %s\n", p[min].name);
    printf("tel : %s\n", p[min].tel);
    printf("addr : %s\n", p[min].addr);

    return 0;
}