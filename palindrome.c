#include<stdio.h> 
#include<string.h> 
 /*CHECK A NUMBER IS PALINDROME OR NOT */    

int main()
{
	int n,sum=0,temp,rem=0;
	printf("enter the value of n");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    { 
     rem=n%10;
     sum=(sum*10)+rem;
     n=n/10;
    } 
     if(temp==sum)
     printf("number is palindrome");
     else
     printf("number is not palindrome");
    return 0;
}

/*CHECK A STRING IS PALINDROME OR NOT */  
int main()
{
    int n=5,i;
	char str[]="nitin",rev[5];
    int j=0;
    for(i=strlen(str)-1;i>=0;i--,j++)
    { 
    } 
     if(strcmp(rev,str)==0)
     printf("string is palindrome");
     else
     printf("string is not palindrome");
     return 0;
	
}
	

  
  
  
	
