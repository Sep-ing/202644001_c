#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Back";    // 첫 번째 문자열
    char str2[20] = "Space";   // 두 번째 문자열
    char str3[20];            // 문자열을 저장할 배열

    char ch = 'p'; 
    int n = 3;     // 사용할 문자 개수

    // str1의 문자열 길이 구하기
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // str1을 str3에 복사하기
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // str2에서 앞의 3글자만 str3에 복사하기
    strncpy(str3, str2, n);
    str3[n] = '\0';  // 문자열의 끝 표시
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    // str1과 str2 전체 비교하기
    printf("str1과 str2 비교: %d\n", strcmp(str1, str2));

    // str1과 str2의 앞 3글자만 비교하기
    printf("str1과 str2의 첫 %d 문자 비교: %d\n", n, strncmp(str1, str2, n));

    // str1 뒤에 str2 붙이기
    strcat(str1, str2);
    printf("str2를 str1에 연결: %s\n", str1);

    // str3 뒤에 str1의 앞 3글자 붙이기
    strncat(str3, str1, n);
    printf("str1의 첫 %d 문자를 str3에 연결: %s\n", n, str3);

    // str1에서 문자 'p'가 처음 나오는 위치 찾기
    char *ptr_ch = strchr(str1, ch);
    printf("str1에서 '%c'의 첫 번째 출현: %s\n", ch, ptr_ch);

    // str1에서 문자열 str2가 처음 나오는 위치 찾기
    char *ptr_str = strstr(str1, str2);
    printf("str1에서 str2의 첫 번째 출현: %s\n",
           ptr_str ? ptr_str : "찾을 수 없음");

    return 0;
}
