#include <stdio.h>

#define max_student 50

void bubbleSort(int *arr, int size);

void bubbleSort(int *arr, int size) {
    for (int i =0; i<size-1; i++) {
        for(int j =0; j< size -i -1; j++){
            if(*(arr + j) > *(arr+j+1)) {
                int temp =*(arr + j);
                *(arr +j) =*(arr +j +1);
                *(arr +j +1) = temp;
            }
        }
    }
}

int main()
{
    int numStudents;

    printf("학생 수를 입력하세요. (최대 50명) : ");
    scanf("%d", &numStudents);

    if (numStudents > max_student || numStudents <= 0) {
        printf("학생 수는 1명 이상 50명 이하로 입력해야 합니다.\n");
        return 1;
    }

    int* gradesPointer;
    int grades[max_student];

    gradesPointer = grades;

    for (int i = 0; i < numStudents; i++) {
        printf("%d번 학생의 최종 성적을 입력하세요. : ", i + 1);
        scanf("%d", gradesPointer + i);
    }

    bubbleSort(gradesPointer, numStudents);

    printf("\n정렬된 성적 : ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", *(gradesPointer + i));
    }

    printf("\n최고 성적 : %d", *(gradesPointer + numStudents - 1));
    printf("\n최하 성적 : %d\n", *gradesPointer);

    return 0;
}