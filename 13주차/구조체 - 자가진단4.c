#include <stdio.h>

struct Person {
    char name[21];
    int height;
};

int main() {
    struct Person p[5];
    int min = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d", p[i].name, &p[i].height);
    }

    for (int i = 1; i < 5; i++) {
        if (p[i].height < p[min].height) {
            min = i;
        }
    }

    printf("%s %d\n", p[min].name, p[min].height);

    return 0;
}