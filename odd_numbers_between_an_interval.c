#include<stdio.h>
void main()
{
    int n,Q,i;
    printf("INPUT:");
    scanf("%d%d",&n,&Q);
    if(Q>100000)
    {
        return;
    }
    for(i=n+1;i<Q;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
        }
    }
}
