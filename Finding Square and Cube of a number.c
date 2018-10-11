PROGRAM:
#include<stdio.h>
#include<conio.h>
void main()
{
void square();
void cube();
int n;
clrscr();
printf(“Enter the the Number:”);
scanf(“%d”,&n);
square(n);
cube(n);
getch();
}
void square(n)
{
int square;
square=n*n;
printf(“Square of %d is %d”,n,square);
}
void cube(n)
{
int cube;
cube=n*n*n;
printf(“\nCube of %d is %d”,n,cube);
}
