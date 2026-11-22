#include <stdio.h>
#include <math.h>
struct Body {
    int height;
    double weight;
};

  struct Body makeStudent(struct Body father, struct Body mother) {
    struct Body student;

    student.height = (int)round((father.height + mother.height) / 2.0 + 5);
    student.weight = (father.weight + mother.weight) / 2.0 - 4.5;

    return student;
}

