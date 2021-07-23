#include <stdio.h>

int main()
{
    int input[5]={0};
    int sum=0, big=0;
    float ave=0;

    // 입력
    for(int i=0;i<5;i++)
    {
        scanf("%d",input[i]);
        sum+=input[i];
        
        if(i==0)
            big = input[i];
        else 
        {
            if(big<input[i])
                big = input[i];
        }
    }
    
    // 평균
    ave=sum/5;

    // 출력
    printf("평균 : %.3f 최고점수 : %d",ave,big);
}