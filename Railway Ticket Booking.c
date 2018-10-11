#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int choice;
struct date
{
int dd,mm,year;
};
struct railway
{
struct date d;
int seat;
char name[20];
int age;
char gender[10];
}r[10];
void book();
void edit();
int print();
int option();
      /**********************MAIN PROGRAM**********************************/
void main()
{
clrscr();
printf("\n******************WELCOME TO SOUTH INDIAN RAILWAYS*********************");
printf("\n\n\n\t\t1.To Book a Ticket\n\n\t\t2.For Editing a Ticket\n\n\t\t3.To Print The Chart\n\n\t\t4.Exit");
printf("\n\n\t\tEnter Your Choice...");
scanf("%d",&choice);
switch(choice)
{
 case 1:
	clrscr();
	book();
	break;
 case 2:
	clrscr();
	edit();
	break;
 case 3:
	clrscr();
	print();
	break;
 case 4:
	clrscr();
	exit(0);
 default:
	main();
	break;
}
getch();
}

		  /*******************TICKET BOOKING*********************/

void book()
{
 int i,n;
 printf("\nEnter No.of Tickets You Want To Book...");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 clrscr();
 printf("\n\tEnter Person %d Details:",i);
 r[i].seat=r[i].seat+i;
 printf("\n\n\t\tDate of Traveling(dd mm yyyy)  :");
 scanf("%d%d%d",&r[i].d.dd,&r[i].d.mm,&r[i].d.year);
 printf("\n\t\tSeat                           :%d",r[i].seat);
 printf("\n\n\t\tName                           :");
 scanf("%s",r[i].name);
 printf("\n\t\tAge                            :");
 scanf("%d",&r[i].age);
 printf("\n\t\tGender                         :");
 scanf("%s",r[i].gender);
 }
 printf("\nYour Ticket Was Booked...\n");
 option();
}

	   /***************EDIT THE DETAILS*************/

void edit()
{
int i,t;
printf("\nEnter Seat Number:");
scanf("%d",&t);
for(i=1;i<=t;i++)
{
 if(t==r[i].seat)
 {
 printf("\n\tEnter New Details:");
 r[i].seat=t;
 printf("\n\n\t Date of Traveling(dd mm yyyy) :");
 scanf("%d%d%d",&r[i].d.dd,&r[i].d.mm,&r[i].d.year);
 printf("\n\t\tName                           :");
 scanf("%s",r[i].name);
 printf("\n\t\tAge                            :");
 scanf("%d",&r[i].age);
 printf("\n\t\tGender                         :");
 scanf("%s",r[i].gender);
 printf("\n\nRecord was Edited Successfully...");
 }
 else
 {
 printf("\n\nThis Seat is empty...");
 }
}
option();
}
	      /****************PRINT THE TICKET******************/

int print()
{
int i,s;
printf("\nEnter Your Seat Number:");
scanf("%d",&s);
for(i=1;i<=s;i++)
{
 if(r[i].seat==s)
 {
 clrscr();
 printf("\n====================================================================");
 printf("\n\t\t  WELCOME TO SOUTH INDIAN RAILWAYS");
 printf("\n====================================================================");
 printf("\n\n\t\t\t\t\t\tDate:%d/%d/%d\n\tName: %s\n\tAge: %d\n\tGender: %s\n\tSeat: %d",r[i].d.dd,r[i].d.mm,r[i].d.year,r[i].name,r[i].age,r[i].gender,r[i].seat);
 printf("\n\n**************************Thankyou For Booking************************");
 return 1;
 }
 else if(r[i].seat!=s && r[i+1].seat!=s)
 {
 printf("\nSeat is Empty...\n\n");
 return option();
 }
}

main();
return 1;
}

	 /************************OTHER OPTIONS****************************/

int option()
{
 printf("\n\n\t\t1.Print Your Ticket\n\n\t\t2.previous Menu\n\n\t\t3.Exit");
 printf("\n\n\t\tEnter Your Choice...");
 scanf("%d",&choice);
 if(choice==1)
 {
 print();
 }
 else if(choice==2)
 {
 main();
 }
 else if(choice==3)
 {
 exit(0);
 }
 else
 {
 printf("\nPlease Enter The Valid Option...");
 option();
 }
 return 1;
}


