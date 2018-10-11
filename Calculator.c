#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c,d,choice;
clrscr();
printf("Enter two number:");
scanf("%d %d",&a,&b);
printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square root\n6.square");
printf("\nEnter your choice...");
scanf("%d",&choice);
switch(choice)
{
case 1:
 printf("\nAddition= %d",a+b);
 break;
case 2:
 printf("\nSubtraction= %d",a-b);
 break;
case 3:
 printf("\nMultiplication= %d",a*b);
 break;
case 4:
 printf("\nDivision= %d",a/b);
 break;
case 5:
 c=sqrt(a);
 d=sqrt(b);
 printf("\nSquare root: a= %d, b= %d",c,d);
 break;
case 6:
 printf("\nSquare: \n\ta= %d, \n\tb= %d",(a*a),(b*b));
 break;
default:
 printf("\nEnter correct choice...");
 break;
}
getch();
}
