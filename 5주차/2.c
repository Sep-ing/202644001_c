//가림이는 주사위 놀이를 하다가 주사위를 10번 던져서 각 숫자가 몇 번씩 나왔는지 알아보려고 한다. 
//한번 던질 때마다 나온 주사위의 숫자를 입력받아서 숫자가 몇 번씩 나왔는지 출력하는 프로그램 작성

#include <stdio.h>

int main()
{
    int CNT[7] = {0};
    int num; // 숫자 저장
    
    for (int i =0; i <10; i++)
    {
        scanf("%d", &num);
        CNT[num]++;
    }
    
    for (int i=1; i <=6; i++)
    {
        printf("%d : %d번\n" , i , CNT[i]);
    }
return 0;
}
