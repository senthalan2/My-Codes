#include<stdio.h>
#include<conio.h>
void main()
{
int choice;
clrscr();
printf("Numbers for Days...");
printf("\n1\n2\n3\n4\n5\n6\n7\n");
printf("Enter your choice...");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("\nSUNDAY");
       break;
case 2:printf("\nMONDAY");
       break;
case 3:printf("\nTUESDAY");
       break;
case 4:printf("\nWEDNESDAY");
       break;
case 5:printf("\nTHURSDAY");
       break;
case 6:printf("\nFRIDAY");
       break;
case 7:printf("\nSATARDAY");
       break;
}
getch();
}
