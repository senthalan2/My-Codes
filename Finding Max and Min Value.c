#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],n,t,i,j;
clrscr();
printf("Enter the no.of elements:");
scanf("%d",&n);
printf("Enter the Elements in an array:\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
  t=a[i];
  a[i]=a[j];
  a[j]=t;
  }
 }
}
printf("\nminimum value in an array = %d",a[0]);
printf("\nmaximum value in an array = %d",a[n-1]);
getch();
}
