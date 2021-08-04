#include <stdio.h>
#define SIZE 1000000
int queue[SIZE]={0};
int top=0;

void push()
{
    int input;
    scanf("%d",&input);
    queue[top]=input;
    top++;
}

void pop()
{
    if(top==0)
        printf("-1\n");
    else
    {
        printf("%d\n",queue[0]);
        
        for(int i=0;i<top;i++)
            queue[i]=queue[i+1];

        queue[top]=0;
        top--;
    }
}

void size()
{
    printf("%d\n",top);
}

void empty()
{
    if(top==0)
        printf("True\n");
    else   
        printf("False\n");
}

void front()
{
    if(top==0)
        printf("-1\n");
    else
        printf("%d\n",queue[top-1]);
}

void back()
{
    if(top==0)
        printf("-1\n");
    else
        printf("%d\n",queue[0]);
}

int main()
{
    int menu;

    while(1)
    {
        scanf("%d",&menu);

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
            case 5 :
                front();
                break;
            case 6 :
                back();
                break;
        }
        
    }
}