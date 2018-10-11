#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int choice,n,option,i;
typedef struct college
{
char name[100],dept[50],mno[15],dest[100],aname[100],type[100];
char rollno[30],idno[30];
int  bno,bbno;
}coll;
int stud();
int lib();
int delb();
int bus();
int adds();
int addb();
int searchs();
int dels();
int staff();
int addf();
int delf();
int searchf();
int searchd();
int searchb();
int addl();
int searchl();
int dell();
int driv();
int deld();
int addd();


int main()
{
printf("--------------------------------------------------------------------------------");
printf("\t\t\t\t     Akshaya \n\t\t\tCollege of Engineering and Technology");
printf("\n--------------------------------------------------------------------------------");
printf("\n\t\t\t       College Management");
printf("\n\t\t\t     ----------------------");
printf("\n\n\t\t1.STUDENT DETAILS...\n\n\t\t2.STAFFS DETAILS...\n\n\t\t3.DRIVERS DETAILS...\n\n\t\t4.BUS DETAILS\n\n\t\t5.LIBRARY DETAILS...,\n\n\t\t6.EXIT...");
printf("\n\nEnter your Choice...");
scanf("%d",&choice);
switch(choice)
{
case 1:stud();
       break;
case 2:staff();
       break;
case 3:driv();
       break;
case 4:bus();
       break;
case 5:lib();
       break;
case 6:
   exit(1);
   break;

default:
   printf("\nEnter Correct Choice");
   break;
}
getch();
return 0;
}
	  //****************STUDENTS MENU******************

int stud()
{
printf("\nStudents Details...");
printf("\n\t\t1.ADD\n\n\t\t2.VIEW ALL THE DATAS\n\n\t\t3.DELETE\n\n\t\t4.Main Menu\n\n\t\t5.EXIT");
printf("\n\nEnter your Choice:");
scanf("%d",&choice);
switch(choice)
{
 case 1:adds();
	printf("\n\nRecord was Added Successfully");
	printf("\n\nIf you Want to go to previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	stud();
	}
	else
	{
	return 1;
	}
	break;
 case 2:searchs();
	printf("\n\nIf you Want to go to previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	stud();
	}
	else
	{
	return 1;
	}
	break;
 case 3:dels();
	printf("\n\nData was deleted Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	stud();
	}
	else
	{
	return 1;
	}
	break;
/* case 4:edit();
	break; */
 case 4:main();
	break;
 case 5:
	exit(1);
	break;
 default:printf("\n\nPlease Enter a Valid Choice...");
	 stud();
	 break;
}
return 1;
}

//       ***********************ADD STUDENTS DETAILS*********************
int adds()
{
coll s;
FILE *fp;
printf("\nEnterNo.of Students:");
scanf("%d",&n);
fp=fopen("student.txt","w");
if(fp==NULL)
{
printf("File not opened");
exit(1);
}
printf("\n**************************ADD THE  DEATILS OF STUDENTS**************************");
for(i=0;i<n;i++)
{
printf("\n\nSTUDENT: %d",i+1);
printf("\n\tName      :\t");
fscanf(stdin,"%s",s.name);
printf("\n\tRoll No   :\t");
fscanf(stdin,"%s",s.rollno);
printf("\n\tDepartment:\t");
fscanf(stdin,"%s",s.dept);
printf("\n\tPh.No     :\t");
fscanf(stdin,"%s",s.mno);
fprintf(fp,"\n\nSTUDENT: %d\n\n\tName      \t: %s \n\n\tRoll No    \t: %s\n\n\tDepartment\t: %s\n\n\tPh.No      \t: %s",i+1,s.name,s.rollno,s.dept,s.mno);
}
fclose(fp);
return 1;
}
//              ****************VIEW STUDENT DETAILS*******************

int searchs()
{
  char file_to_open[]="student.txt",ch;
  FILE *fp;
  if((fp=fopen(file_to_open,"r"))!=NULL)
  {
    printf("\n********************************DEATAILS OF STUDENTS****************************");
    while((ch=fgetc(fp))!=EOF)
    {
     putchar(ch);
    }
  }
  else
  {
   printf("could not open %s\n",file_to_open);
   return 1;
  }
  getch();
  return(0);
}

	 //*************DELETE A SPECIFIC STUDENT DATA***************
int dels()
{
FILE *fp1,*fp2;
char filename[40];
char ch;
int delete_line,temp=1;
printf("\n**************************DELETE THE DEATAILS OF STUDENTS***********************");
printf("\n\nEnter file Name:");
scanf("%s",filename);
fp1=fopen("student.txt","r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
rewind(fp1);
printf("\nEnter Line Number of the line to be deleted:");
scanf("%d",&delete_line);
fp2=fopen("student.txt","w");
ch=getc(fp1);
while(ch !=EOF)
{
 ch=getc(fp1);
 if(ch =='\n')
  temp++;
  if(temp!=delete_line)
  {
   putc(ch,fp2);
  }
}
fclose(fp1);
fclose(fp2);
remove(filename);
rename("student.txt",filename);
printf("\nThe contents of the file after being modified are as follows:\n");
fp1=fopen(filename,"r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
fclose(fp1);
return 0;
}



//                 ************************STAFFS MENU***********************

int staff()
{
printf("\nStaffs Details...");
printf("\n\n\t\t1.ADD\n\n\t\t2.VIEW THE DETAILS\n\n\t\t3.DELETE\n\n\t\t4.MAIN MENU\n\n\t\t5.EXIT");
printf("\nEnter your choice:");
scanf("%d",&choice);
switch(choice)
{
 case 1:addf();
	printf("\n\nRecord was Added Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	staff();
	}
	else
	{
	return 1;
	}
	break;
 case 2:searchf();
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	staff();
	}
	else
	{
	return 1;
	}
	break;
 case 3:delf();
	printf("\n\nData was deleted Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	staff();
	}
	else
	{
	return 1;
	}
	break;
/* case 4:edit();
	break; */
 case 4 :main();
	 break;
 case 5 :exit(1);
	 break;
 default:printf("\nEnter Valid Choice");
	 staff();
	 break;
}
return 1;
}
//           *************ADD STAFFS DETAILS************

int addf()
{
coll s;
FILE *fp;
printf("\n\n\nEnterNo.of Faculties:");
scanf("%d",&n);
printf("\n*****************************STORE THE STAFF DETAILS****************************");
fp=fopen("staff.txt","w");
if(fp==NULL)
{
printf("file not opened");
exit(1);
}
for(i=0;i<n;i++)
{
printf("\nSTAFF: %d",i+1);
printf("\n\n\tName      :\t");
fscanf(stdin,"%s",s.name);
printf("\n\n\tID No     :\t");
fscanf(stdin,"%s",s.idno);
printf("\n\n\tDepartment:\t");
fscanf(stdin,"%s",s.dept);
printf("\n\n\tPh.No     :\t");
fscanf(stdin,"%s",s.mno);
fprintf(fp,"\n\nSTAFF: %d\n\n\tName      \t:%s \n\n\tID No     \t:%s\n\n\tDepartment\t:%s\n\n\tPh.No     \t:%s",i+1,s.name, s.idno,s.dept,s.mno);
}
fclose(fp);
return 1;
}

//          *********************VIEW STAFF DETAILS**********************

int searchf()
{
  char file_to_open[]="staff.txt",ch;
  FILE *fp;
  if((fp=fopen(file_to_open,"r"))!=NULL)
  {
    printf("\n*********************************DEATAILS OF STAFFS*****************************");
    while((ch=fgetc(fp))!=EOF)
    {
     putchar(ch);
    }
  }
  else
  {
   printf("could not open %s\n",file_to_open);
   return 1;
  }
  getch();
  return(0);
}
    //     *********DELETE A SPECIFIC STAFF DETAILS***********

int delf()
{
FILE *fp1,*fp2;
char filename[40];
char ch;
int delete_line,temp=1;
printf("\n***************************DELETE THE DEATAILS OF STAFFS************************");
printf("\nEnter file Name:");
scanf("%s",filename);
fp1=fopen("staff.txt","r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
rewind(fp1);
printf("\nEnter Line Number of the line to be deleted:");
scanf("%d",&delete_line);
fp2=fopen("staff.txt","w");
ch=getc(fp1);
while(ch !=EOF)
{
 ch=getc(fp1);
 if(ch =='\n')
  temp++;
  if(temp!=delete_line)
  {
   putc(ch,fp2);
  }
}
fclose(fp1);
fclose(fp2);
remove(filename);
rename("staff.txt",filename);
printf("\nThe contents of the file after being modified are as follows:\n");
fp1=fopen(filename,"r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
fclose(fp1);
return 0;
}

 //               ************************DRIVERS MENU************************

int driv()
{
printf("\nDrivers Details...");
printf("\n\n\t\t1.ADD\n\n\t\t2.VIEW ALL THE DETAILS.\n\n\t\t3.DELETE\n\n\t\t4.MAIN MENU\n\n\t\t5.EXIT");
printf("\n\nEnter your choice...");
scanf("%d",&choice);
switch(choice)
{
 case 1:addd();
	printf("\n\nRecord was Added Successfully");
	printf("\nnIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	driv();
	}
	else
	{
	return 1;
	}
	break;
 case 2:searchd();
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	driv();
	}
	else
	{
	return 1;
	}
	break;
 case 3:deld();
	printf("\n\nData was deleted Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	driv();
	}
	else
	{
	return 1;
	}
	break;
/* case 4:edit();
	break; */
 case 4:main();
	break;
 case 5:exit(1);
	break;
 default:printf("Enter Valid Choice");
	 driv();
	 break;
}
return 1;
}

 //          ********************ADD DRIVERS DETAILS********************

int addd()
{
FILE *fp;
char name[100],mno[15];
int bno,i;
printf("\n\nEnterNo.of Drivers:");
scanf("%d",&n);
printf("\n***************************ADD THE DEATAILS OF DRIVERS**************************");
fp=fopen("driver.txt","w");
if(fp==NULL)
{
printf("\nFile not be opened");
exit(1);
}
for(i=0;i<n;i++)
{
printf("\n\n\tName      :\t");
fscanf(stdin,"%s",name);
printf("\n\tBus No   :\t");
fscanf(stdin,"%d",&bno);
printf("\n\tPh.No     :\t");
fscanf(stdin,"%s",mno);
fprintf(fp,"\n\nDRIVER: %d\n\tName: %s \n\n\tBus No: %d\n\n\tPh.No: %s",i+1,name,bno,mno);
}
fclose(fp);
return 1;
}
	  //****************VIEW DRIVERS DETAILS***********************
int searchd()
{
  char file_to_open[]="driver.txt",ch;
  FILE *fp;
  if((fp=fopen(file_to_open,"r"))!=NULL)
  {
    printf("\n***********************DEATAILS OF DRIVERS**********************");
    while((ch=fgetc(fp))!=EOF)
    {
     putchar(ch);
    }
  }
  else
  {
   printf("could not open %s\n",file_to_open);
   return 1;
  }
  getch();
  return(0);
}
	  //******************DELETE DRIVER DETAILS************************
int deld()
{
FILE *fp1,*fp2;
char filename[40];
char ch;
int delete_line,temp=1;
printf("\n*************************DELETE THE DEATAILS OF DRIVERS************************");
printf("\n\nEnter file Name:");
scanf("%s",filename);
fp1=fopen("driver.txt","r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
rewind(fp1);
printf("\nEnter Line Number of the line to be deleted:");
scanf("%d",&delete_line);
fp2=fopen("driver.txt","w");
ch=getc(fp1);
while(ch !=EOF)
{
 ch=getc(fp1);
 if(ch =='\n')
  temp++;
  if(temp!=delete_line)
  {
   putc(ch,fp2);
  }
}
fclose(fp1);
fclose(fp2);
remove(filename);
rename("driver.txt",filename);
printf("\nThe contents of the file after being modified are as follows:\n");
fp1=fopen(filename,"r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
fclose(fp1);
return 0;
}


      // *******************BUS DETAILS*************************

int bus()
{
printf("\n\nBus Details...");
printf("\n\n\t\t1.ADD\n\n\t\t2.VIEW ALL THE DETAILS.\n\n\t\t3.DELETE\n\n\t\t4.MAIN MENU\n\n\t\t5.EXIT");
printf("\n\nEnter your choice...");
scanf("%d",&choice);
switch(choice)
{
 case 1:addb();
	printf("\n\nRecord was Added Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	bus();
	}
	else
	{
	return 1;
	}
	break;
 case 2:searchb();
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	bus();
	}
	else
	{
	return 1;
	}
	break;
 case 3:delb();
	printf("\nData was deleted Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	bus();
	}
	else
	{
	return 1;
	}
	break;
/* case 4:edit();
	break; */
 case 4:main();
	break;
 case 5:exit(1);
	break;
 default:printf("Enter Valid Choice");
	 bus();
	 break;
}
return 1;
}

       //  ******************ADD BUS DETAILS************************

int addb()
{
FILE *fp;
char name[100],dest[40],mno[15];
int bno,i;
printf("\n\nEnterNo.of Buses:");
scanf("%d",&n);
fp=fopen("bus.txt","w");
if(fp==NULL)
{
printf("\nFile not opened");
exit(1);
}
printf("\n****************************ADD THE DEATAILS OF BUSES***************************");
for(i=0;i<n;i++)
{
printf("\n\nBUS %d:",i+1);
printf("\n\n\tDriver Name      :\t");
fscanf(stdin,"%s",name);
printf("\n\tBus No           :\t");
fscanf(stdin,"%d",&bno);
printf("\n\tDriver Ph.No     :\t");
fscanf(stdin,"%s",mno);
printf("\n\tDestination      :\t");
fscanf(stdin,"%s",dest);
fprintf(fp,"\n\nBus %d:\n\tDriver Name:%s \n\tBus No:%d\n\tDriver Ph.No:%s\n\tDestination: %s",i+1,name,bno,mno,dest);
}
fclose(fp);
return 1;
}

  //    *********************** VIEW THE BUS DETAILS************************


int searchb()
{
  char file_to_open[]="bus.txt",ch;
  FILE *fp;
  if((fp=fopen(file_to_open,"r"))!=NULL)
  {
    printf("\n************************DEATAILS OF DRIVERS*********************");
    while((ch=fgetc(fp))!=EOF)
    {
     putchar(ch);
    }
  }
  else
  {
   printf("could not open %s\n",file_to_open);
   return 1;
  }
  getch();
  return(0);
}
     // ***********************DELETE A SPECIFIC BUS DETAILS********************


int delb()
{
FILE *fp1,*fp2;
char filename[40];
char ch;
int delete_line,temp=1;
printf("\n**************************DELETE THE DEATAILS OF BUSES**************************");
printf("\nEnter file Name:");
scanf("%s",filename);
fp1=fopen("bus.txt","r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
rewind(fp1);
printf("\nEnter Line Number of the line to be deleted:");
scanf("%d",&delete_line);
fp2=fopen("bus.txt","w");
ch=getc(fp1);
while(ch !=EOF)
{
 ch=getc(fp1);
 if(ch =='\n')
  temp++;
  if(temp!=delete_line)
  {
   putc(ch,fp2);
  }
}
fclose(fp1);
fclose(fp2);
remove(filename);
rename("bus.txt",filename);
printf("\nThe contents of the file after being modified are as follows:\n");
fp1=fopen(filename,"r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
fclose(fp1);
return 0;
}
  //    ****************LIBRARY DETAILS*************************


int lib()
{
printf("\nLibrary Details...");
printf("\n\n\t\t1.ADD Books\n\n\t\t2.VIEW ALL THE DATAS OF BOOKS\n\n\t\t3.DELETE BOOK Info\n\n\t\t4.MAIN MENU\n\n\t\t5.EXIT");
printf("\nEnter your choice...");
scanf("%d",&choice);
switch(choice)
{
 case 1:addl();
	printf("\n\nRecord was Added Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	lib();
	}
	else
	{
	return 1;
	}
	break;
 case 2:searchl();
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	lib();
	}
	else
	{
	return 1;
	}
	break;
 case 3:dell();
	printf("\nData was deleted Successfully");
	printf("\n\nIf you Want to go previous Menu(1/0):");
	scanf("%d",&option);
	if(option==1)
	{
	lib();
	}
	else
	{
	return 1;
	}
	break;
/* case 4:editl();
	break; */
 case 4:main();
	break;
 case 5:exit(1);
	break;
 default:printf("\nEnter Valid Choice");
	 lib();
	 break;
}
return 1;
}

//   ********************ADD BOOKS************************

int addl()
{
coll s;
FILE *fp;
printf("\n\nEnterNo.of Books:");
scanf("%d",&n);
printf("\n****************************ADD THE DEATAILS OF BOOKS***************************");
fp=fopen("library.txt","w");
if(fp==NULL)
{
printf("\nFile not opened");
exit(1);
}
for(i=0;i<n;i++)
{
printf("\n\nBOOK: %d",i+1);
printf("\n\n\tBook Title :\t");
fscanf(stdin,"%s",s.name);
printf("\n\tBook No    :\t");
fscanf(stdin,"%d",&s.bbno);
printf("\n\tAuthor Name:\t");
fscanf(stdin,"%s",s.aname);
printf("\n\tType       :\t");
fscanf(stdin,"%s",s.type);
fprintf(fp,"\n\nBOOK %d:\n\n\tBook Title: %s \n\n\tBook No: %d\n\n\tAuthor Name: %s\n\n\tType: %s",i+1,s.name,s.bbno,s.aname,s.type);
}
fclose(fp);
return 1;
}
//              ****************VIEW BOOK DETAILS*******************

int searchl()
{
  char file_to_open[]="library.txt",ch;
  FILE *fp;
  if((fp=fopen(file_to_open,"r"))!=NULL)
  {
    printf("\n********************************DEATAILS OF BOOKS*******************************");
    while((ch=fgetc(fp))!=EOF)
    {
     putchar(ch);
    }
  }
  else
  {
   printf("could not open %s\n",file_to_open);
   return 1;
  }
  getch();
  return(0);
}
	 //*************DELETE A BOOK DATA***************
int dell()
{
FILE *fp1,*fp2;
char filename[40];
char ch;
int delete_line,temp=1;
printf("\n***************************DELETE THE DEATAILS OF BOOKS*************************");
printf("\n\nEnter file Name:");
scanf("%s",filename);
fp1=fopen("library.txt","r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
rewind(fp1);
printf("\nEnter Line Number of the line to be deleted:");
scanf("%d",&delete_line);
fp2=fopen("library.txt","w");
ch=getc(fp1);
while(ch !=EOF)
{
 ch=getc(fp1);
 if(ch =='\n')
  temp++;
  if(temp!=delete_line)
  {
   putc(ch,fp2);
  }
}
fclose(fp1);
fclose(fp2);
remove(filename);
rename("library.txt",filename);
printf("\nThe contents of the file after being modified are as follows:\n");
fp1=fopen(filename,"r");
ch=getc(fp1);
while(ch != EOF)
{
 printf("%c",ch);
 ch=getc(fp1);
}
fclose(fp1);
return 0;
}

