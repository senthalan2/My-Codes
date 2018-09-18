#include<stdio.h>
#include<ctype.h>
void main()
{
  char input;
  scanf("%c",&input);
  if(isalpha(input))
  {
	  if(input=='a' || input=='e' || input=='i' || input=='o' || input=='u')
	  {
		  printf("Vowel");
	  }
	  else
	  {
		  printf("Consonant");
	  }
  }
  else
  {
	  printf("Invalid");
  }
}
