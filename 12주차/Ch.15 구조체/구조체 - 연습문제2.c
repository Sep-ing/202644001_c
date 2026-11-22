#include <stdio.h>

struct person {
    char name[20];
    int age;
};

int main() {
    struct person p = {"Yejun", 12};
    struct person fp;

    scanf("%19s", fp.name);
    scanf("%d", &fp.age);

    printf("Your name: %s, age: %d\n", p.name, p.age);
    printf("Friend's name: %s, age: %d\n", fp.name, fp.age);

    return 0;
}