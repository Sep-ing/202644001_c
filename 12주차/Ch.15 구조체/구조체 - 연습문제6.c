#include <stdio.h>

struct Point {
    int x;
    int y;
};

int main() {
    struct Point p[2];
    float x, y;

    for (int i = 0; i < 2; i++) {
        scanf("%d %d", &p[i].x, &p[i].y);
    }

    x = (p[0].x + p[1].x) / 2.0;
    y = (p[0].y + p[1].y) / 2.0;

    printf("Center point = (%.1f, %.1f)\n", x, y);

    return 0;
}