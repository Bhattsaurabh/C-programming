#include<stdio.h>  
     
int main()
{

	int i,n,sum=0,m,flag=0;
	printf("enter the value of n\n");
    scanf("%d",&n);
    m=n/2;
    for(i=2;i<=m;i++)
    { if(n%i==0)
       flag++;
	}
	if(flag==0)
	printf("number is prime");
	else
	printf("number is not prime ");

    return 0;
	
}

	

  
  
  
	
