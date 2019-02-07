#include<stdio.h>
void main()
{
    int num,i,flag=0;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num==1)
    {
        printf("%d is neither a prime nor a composite number.",num);
    }
    else
    {
        for(i=2;i<num/2;i++)
        {
            if(num%i==0)
            {
                flag=1;
            }
        
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
    else
    {
        printf("Not");
    }
}
