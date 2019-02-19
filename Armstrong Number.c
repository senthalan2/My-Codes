#include<stdio.h>
#include<conio.h>
int cube(int num)
{
    return num*num*num;
}

void main()
{
    int N,result=0,rem,n;
    printf("INPUT:\n");
    scanf("%d",&N);
    n=N;
    while(n!=0)
    {
        rem=n%10;
        result=result+(cube(rem));
        n=n/10;
    }
    if(result==N)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

