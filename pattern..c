#include<stdio.h>  
/*     *
      ***
     *****
    *******
*/
     
int main()
{
	int n,j=0,i=0,k=0;
	printf("enter the value of n");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
    	for(j=1;j<=n-i;j++)
    	{printf(" ");
		}
	    
	    for(k=1;k<=2*i-1;k++)
	    {
	    	printf("*");
		}
		printf("\n");
		}
    return 0;
}


/*
          *
         **
        ***
       ****
      *****
       ****
        ***
         **
          *
*/


int main()
{
	int n,j=0,i=0,k=0,space,star=1;
	printf("enter number of rows");
    scanf("%d",&n);
    space=n-1;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=space;j++)
	       printf(" ");
	   for(k=1;k<=star;k++)
	    printf("*");
		printf("\n");	         
       
       if(space>i)
       {
       	space=space-1;
       	star=star+1;
	   }
	   else
	   {space=space+1;
	    star=star-1;
	   }
    }
    return 0;
}


/* 
                 *
                ***
               *****
              *******
             *********
              *******
               *****
                ***
                 *
*/



int main()
{
	int n,j=0,i=0,k=0;
	printf("enter the rows");
    scanf("%d",&n);
    int space=n-1,star=1;
    for(i=1;i<=n;i++)
    {
    	for(j=1;j<=space;j++)
    	printf(" ");
		
	    for(k=1;k<=star;k++)
	    {
	    	printf("*");
		}
		printf("\n");
		
	if(space>i)
	{
	  space=space-1;
	  star=star+2;
	}
	else
	{      
			space=space+1;
			star=star-2;
	}
}
    return 0;
}	

  
  
  
	
