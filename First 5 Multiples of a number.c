#include<stdio.h>
#include<conio.h>

void main()
{
    int N,i,result;
    printf("INPUT:\n");
    scanf("%d",&N);
    printf("OUTPUT:\n");
    for(i=1;i<=5;i++)
    {
        result=N*i;
        printf("%d   ",result);
    }
    getch();
}
