#include <stdio.h>

struct Student {
    char name[21];
    int score;
};

int main() {
    struct Student s[5];
    int max = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%20s %d", s[i].name, &s[i].score);
    }

    for (int i = 1; i < 5; i++) {
        if (s[i].score > s[max].score) {
            max = i;
        }
    }

    printf("%s %d\n", s[max].name, s[max].score);

    return 0;
}