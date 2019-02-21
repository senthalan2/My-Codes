#include<stdio.h>
#include<conio.h>
int cube(int num)
{
    return num*num*num;
}

void main()
{
    int N,result,rem,n,M,i;
    printf("INPUT:\n");
    scanf("%d%d",&N,&M);
    for(i=N+1;i<M;i++)
    {
        n=i;
        result=0;
        while(n!=0)
        {
            rem=n%10;
            result=result+(cube(rem));
            n=n/10;
        }
        if(result==i)
        {
            printf("%d\t",i);
        }
       
    }
}
