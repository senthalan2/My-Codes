#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i,j,count;
    printf("INPUT:\n");
    scanf("%d%d",&a,&b);
    printf("OUTPUT:\n");
    for(i=a+1;i<b;i++)
    {
        count=0;
        for(j=2;j<i/2;j++);
        {
            if(i%j==0)
            {
                count=1;
            }
            
        }
        if(count==0)
            {
                printf("%d\t",i);
            }
        
    }
    getch();
}
