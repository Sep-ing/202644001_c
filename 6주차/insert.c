#include <stdio.h>

// 삽입 정렬 함수
void insertionSortAscending(int arr[], int n) {

    // 두 번째 원소부터 차례대로 정렬
    for (int i = 1; i < n; i++) {

        // 현재 삽입할 값을 key에 저장
        int key = arr[i];

        // key 바로 앞의 위치부터 비교
        int j = i - 1;

        // key보다 큰 값들을 오른쪽으로 한 칸씩 이동
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 알맞은 위치에 key 삽입
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {7, 4, 5, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("초기 상태 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    insertionSortAscending(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}