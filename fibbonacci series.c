#include<stdio.h>  
    
int main()
{

	int n1=0,n2=1,i,n,sum=0;
	printf("enter the value of n");
    scanf("%d",&n);
    printf("%d%d",n1,n2);
    for(i=2;i<n;i++)
    { 
      sum=n1+n2;
      n1=n2;
      n2=sum;
      	  printf("%d",sum);
	}

    return 0;
	
}

/*USING RECURSION*/
int fib(int,int);
int fib(int n1,int n2)
{    
    
		if(n1+n2<10)
		{
		int next=n1+n2;
		 printf("\t%d",next);
		 return(fib(n2,next));	
        }
        return 0;
}
int main()
{
  int n1=0,n2=1;
  printf("\t%d\t%d",n1,n2);
  fib(n1,n2);
    return 0;
	
}	

  
  
  
	
