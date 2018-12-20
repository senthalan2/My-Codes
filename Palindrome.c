#include<stdio.h>

void main()

{
  
	int N,rem,res=0,num;

  	scanf("%d",&N);
	if(N<=1000)
	{
		num=N;
 
		while(N!=0)

		{
    
			rem=N%10;
    
			res=res*10+rem;
    
			N=N/10;
  
		}
  
		if(res==num)
  
		{
    
			printf("yes");
  
		}
 
		else

 		{	

	    		printf("no");
 
		}
	
}
}
