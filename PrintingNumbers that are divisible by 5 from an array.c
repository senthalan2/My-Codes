#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
clrscr();
printf("enter the no.of elements in an array:");
scanf("%d",&n);
printf("enter the %d elements in an array:\n",n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
printf("Numbers divisible by 5 are given below...\n\n");
for(i=1;i<=n;i++)
{
 if(a[i]%5==0)
 {
  printf("%d at the position %d\n",a[i],i);
 }
}
getch();
}
