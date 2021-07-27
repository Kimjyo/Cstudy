#include <stdio.h>

#define SIZE 1000000

int stack[SIZE]={0};
int cnt=0;

void push()
{
    // data 입력
    int data;
    scanf("%d", &data);
    // push
    stack[cnt]= data;
    cnt++;
}

void pop()
{
    // 스택이 빈 경우
    if(cnt==0 && stack[cnt]==0)
    {
        printf("-1\n");
        return;
    }

    // pop
    printf("%d\n",stack[cnt-1]);
    stack[cnt-1]=0;
    cnt--;
}

void size()
{
    printf("%d\n",cnt);
}

void empty()
{
    if(cnt==0)
        printf("True\n");
    else
        printf("False\n");
}

void top()
{
    if(cnt==0 && stack[cnt]==0)
        printf("-1\n");
    else
        printf("%d\n",stack[cnt-1]);
}

int main()
{
    int menu;

    while(1)
    {
        // 메뉴 입력
        scanf("%d",&menu);

        // 메뉴 실행
        switch(menu)
        {
            case 0 :
                return 0;
            case 1 :
                push();
                break;
            case 2 :
                pop();
                break;
            case 3 :
                size();
                break;  
            case 4 :
                empty();
                break;
            case 5:
                top();
                break;
        }
    }
        
}