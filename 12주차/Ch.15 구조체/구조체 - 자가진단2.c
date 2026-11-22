#include <stdio.h>
#include <string.h>

struct School {
    char school[31];
    int grade;
};

int main() {
    struct School s1 = {"Jejuelementary", 6};
    struct School s2;

    scanf("%30s %d", s2.school, &s2.grade);

    printf("%d grade in %s School\n", s1.grade, s1.school);
    printf("%d grade in %s School\n", s2.grade, s2.school);

    return 0;
}