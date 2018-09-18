#include<stdio.h>
void main()
{
  int input;
  scanf("%d",&input);
  if(input>0)
  {
	  if(input%2==0)
	  {
		  printf("Even");
	  }
	  else
	  {
		  printf("Odd");
	  }
  }
  else
  {
	  printf("Invalid");
  }
}
