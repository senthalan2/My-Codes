#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],c[20],n1,n2,n3,i,j,k=0,temp;
clrscr();
printf("Enter the No.of elements in array1:");
scanf("%d",&n1);
printf("Enter the elements of Array1:\n");
for(i=0;i<n1;i++)
{
scanf("%d",&a[i]);
c[k]=a[i];
k++;
}
printf("\n\nEnter the No.of elements in array2:");
scanf("%d",&n2);
printf("Enter the elements of Array2:\n");
for(i=0;i<n2;i++)
{
scanf("%d",&b[i]);
c[k]=b[i];
k++;
}
n3=n1+n2;
for(i=0;i<n3;i++)
{
for(j=i+1;j<n3;j++)
{
if(c[i]>c[j])
{
temp=c[i];
c[i]=c[j];
c[j]=temp;
}
}
}
printf("Merging Array:");
for(i=0;i<n3;i++)
{
printf("\n%d",c[i]);
}
getch();
}
