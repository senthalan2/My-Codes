#include<stdio.h>
void main()
{
    int arr[10],N,i,K,sum=0;
    scanf("%d%d",&N,&K);
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
        if(i<K)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}
