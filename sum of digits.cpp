#include<stdio.h>  
     
int main()
{

	int n,sum=0,temp,rem=0;
	printf("enter the value of n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    { 
     rem=n%10;
     sum=sum+rem;
     n=n/10;
    } 
     printf("number is %d",sum);
    return 0;
	
}

	

  
  
  
	
