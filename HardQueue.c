#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int push(int* queue, int* top, int* cnt)
{
    // 배열이 꽉 참
    if(top==cnt)
        swap(queue,top,cnt);

    int input;
    scanf("%d",&input);
    queue[*top]=input;
    (*top)++;
}

int pop(int* queue, int* top)
{
    if(*top==0)
        printf("-1\n");
    else
    {
        printf("%d\n",queue[0]);
        
        for(int i=0;i<*top;i++)
            queue[i]=queue[i+1];

        queue[*top]=0;
        (*top)--;
    }
}

void size(int* top)
{
    printf("%d\n",*top);
}

void empty(int* top)
{
    if(*top==0)
        printf("True\n");
    else   
        printf("False\n");
}

void front(int* queue, int* top)
{
    if(*top==0)
        printf("-1\n");
    else
        printf("%d\n",queue[(*top)-1]);
}

void back(int* queue, int* top)
{
    if(*top==0)
        printf("-1\n");
    else
        printf("%d\n",queue[0]);
}

void swap(int* queue, int* top, int* cnt)
{
    int* temp;

    temp = (int*)malloc((*cnt)*sizeof(int));

    for(int i=0;i<=(*top);i++)
        temp[i]=queue[i];

    queue = (int*)malloc((*cnt)*sizeof(int));

    for(int i=0;i<=(*top);i++)
        queue[i]=temp[i];
}

int main()
{
    int menu,s=1,N,Top=0;
    int* temp;
    int* queue;
    int* top=&Top;
    int* cnt=&s;

    queue = (int*)malloc(s*sizeof(int));

    while(1)
    {
        scanf("%d",&menu);

        switch(menu)
        {
            case 0 :
                return 0;
            case 1 :
                push(queue, top, cnt);
                break;
            case 2 :
                pop(queue, top);
                break;
            case 3 :
                size(top);
                break;
            case 4 :
                empty(top);
                break;
            case 5 :
                front(queue, top);
                break;
            case 6 :
                back(queue, top);
                break;
        }
        
    }
}