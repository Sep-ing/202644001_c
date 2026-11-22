#include <stdio.h>

struct Student {
    char name[20];
    int score[3];
    int total;
};

void input(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%19s", arr[i].name);
        arr[i].total = 0;

        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i].score[j]);
            arr[i].total += arr[i].score[j];
        }
    }
}

void sort(struct Student arr[], int n) {
    struct Student temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i].total < arr[j].total) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void output(struct Student arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s %d %d %d %d\n",
               arr[i].name,
               arr[i].score[0],
               arr[i].score[1],
               arr[i].score[2],
               arr[i].total);
    }
}