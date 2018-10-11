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
printf("Ascending Order...\n");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
printf("\nDescending Order...\n");
for(i=n-1;i>=0;i--)
{
printf("%d\t",a[i]);
}
getch();
}
