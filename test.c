#include <stdio.h>

int main()
{
    int input[5]={0};
    int n, cnt=0;

    //입력
    for(int i=0;i<5;i++)
        scanf("%d",input[i]);

    //입력2
    scanf("%d", &n);

    // 검사
    for(int i=0;i<5;i++)
    {
        if(input[i]==n) 
            cnt++;
    }
    
    printf("입력받은 수는 %d개 존재합니다.",cnt);

}
