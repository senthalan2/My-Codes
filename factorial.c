#include<stdio.h>
#include<conio.h>

int fact(int num)
{
    int i,sum=1;
    for(i=num;i>=1;i--)
    {
        sum=sum*i;
    }
    return sum;
}

void main()
{
int n,result;
printf("INPUT:\n");
scanf("%d",&n);
result=fact(n);
printf("OUTPUT:\n%d",result);
getch();
}
