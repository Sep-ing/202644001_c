#include <stdio.h>

struct Person {
    char Name[20];
    char School[20];
    int Grade;
};
int main() {
    struct Person p;
    scanf("%19s", p.Name);
    scanf("%19s", p.School);
    scanf("%d", &p.Grade);  

    printf("Name : %s\n", p.Name);
    printf("School : %s\n", p.School);
    printf("Grade : %d\n", p.Grade);

    return 0;
}
