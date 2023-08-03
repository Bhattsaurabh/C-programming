#include<stdio.h>
/*HCF*/

int main()
{
	int n1,n2,n,res,i;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	
	n=(n1>n2)?n2:n1;
	
	for(i=1;i<=n;i++)
	{
	   if((n1%i==0)&&(n2%i==0))
	    res=i;	
	}
	
	printf("HCF of %d and %d is %d",n1,n2,res);
	return 0;
}


/*LCM*/

int main()
{
	int n1,n2,n,res,i;
	printf("enter first number");
	scanf("%d",&n1);
	printf("enter second number");
	scanf("%d",&n2);
	
	n=(n1>n2)?n1:n2;
	
	for(i=n;i<=n1*n2;i++)
	{
	   if((i%n1==0)&&(i%n2==0))
	    {
		res=i;
		break;	
	   }
   }   
	
	printf("LCM of %d and %d is %d",n1,n2,res);
	return 0;
}

/*PERFECT NUMBER:A NUMBER WHOSE SUM OF FACTORS IS SAME AS NUMBER FOR EXAMPLE 6 (1,2,3)*/

int main()
{    int n=0,count=0,i=0;
	printf("enter number");
	scanf("%d",&n);
	
	for(i=1;i<n;i++)
	{
	   if(n%i==0)
	    {
		  count=count+i;
		  }
    }
    if(count==n)
	printf("\n%d is perfect number",n);
	else
	printf("%d is not perfect number",n);
	return 0;
}
