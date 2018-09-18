#include<stdio.h>
#include<ctype.h>
void main()
{
  char input;
  scanf("%c",&input);
  if(isalpha(input))
  {
	  printf("Alphabet");
  }
  else
  {
	  printf("No");
  }
}
