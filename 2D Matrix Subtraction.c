#include<stdio.h>
#include<conio.h>
void main()
{
int m1[10][10],m2[10][10],m3[10][10],i,j,r,c;
clrscr();
printf("Enter no.of rows and columns:\n");
scanf("%d %d",&r,&c);
printf("Enter the elements of matrix 1:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&m1[i][j]);
}
}
printf("Enter the elements of matrix 2:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&m2[i][j]);
}
}
printf("Subtraction of mat1 and mat2 is:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
m3[i][j]=m1[i][j]-m2[i][j];
printf("\n%d",m3[i][j]);
}
}
getch();
}
