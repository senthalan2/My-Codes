#include<stdio.h>
#include<conio.h>
void main()
{
int s1[20],s2[20],s3[20],s4[20],s5[20],total[20],ave[20],n,i;
clrscr();
printf("Enter No.of students:");
scanf("%d",&n);
printf("Enter the 5 marks of Students:");
for(i=1;i<=n;i++)
{
printf("\n\nstudent %d:\n",i);
scanf("%d%d%d%d%d",&s1[i],&s2[i],&s3[i],&s4[i],&s5[i]);
total[i]=s1[i]+s2[i]+s3[i]+s4[i]+s5[i];
ave[i]=total[i]/5;
printf("Total = %d\nAverage = %d",total[i],ave[i]);
}
getch();
}
