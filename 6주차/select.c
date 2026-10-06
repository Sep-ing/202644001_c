#include <stdio.h>

// 선택 정렬 함수
void selectionSortAscending(int arr[], int n) {

    // 정렬할 위치를 앞에서부터 하나씩 선택
    for (int i = 0; i < n - 1; i++) {

        //  현재 위치를 가장 작은 값의 위치라고 가정
        int minIndex = i;

        // 뒤쪽 값들과 비교하면서 가장 작은 값의 위치 찾기
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // 찾은 최솟값과 현재 위치의 값 교환
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
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

    selectionSortAscending(arr, n);

    printf("정렬된 배열: [ ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("]\n");

    return 0;
}