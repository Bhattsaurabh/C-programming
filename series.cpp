#include<stdio.h>
/*SERIES*/

 int fact(int);

int main()
{
	int n,sum=0,p=0,sum1=0;
	printf("enter the end term\n");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{   
	    p=fact(i);
		for(int j=i;j<=i;j++)
		{
			sum =(p/j);
			sum1=sum1+sum;
			printf(" %d +",sum);
		}
	   	
	}printf("\n\n%d\n",sum1);
	
	return 0;
}
int fact(int k){
	if(k==1)
	return 1;
	else
 	return k*fact(k-1);
 }
 
 /*DECIMAL TO BINARY USING FUNCTIONS*/
 
 int binary(int k)
 {    int s=0;
 	printf("enter the size of number ");
 	scanf("%d",&s);
 	int bi[s];
 	for(int j=s;j>0;j--)
 	{   
 		bi[j]=k%2;
 		k=k/2;
	 }
	 for(int j=1;j<=s;j++)
 	{   
 		printf("%d",bi[j]);
	 }
	 return 0;
 	
 }
 int main()
{
	int n,sum=0,p=0;
	printf("enter the number\n");
	scanf("%d",&n);
	p=binary(n);
}
  
  
  
  /*CHECK TWO STRINGS ARE ANAGRAM OR NOT*/
  
  int main()
{
	int count=0;
	char temp;
	char str1[10];
	char str2[10];
	printf("enter the first string\n");
	gets(str1);
	printf("enter the second string\n");
	gets(str2);
	if(strlen(str1)==strlen(str2))
	{   
		printf("length of the strings are %d\n",strlen(str2));
	
	for(int i=0;i<strlen(str1);i++)
	   {  
	    	for(int j=0;j<strlen(str2);j++)
		     {
		         if(str1[i]==str2[j])
		         {
				   printf("%c character found\n",str1[i]);
		            count++;
		         }
		       } 
	   	
        }    
    if(count==strlen(str1))
    printf("strings are anagram\n");
    else
    printf("strings are not anagram\n");
  }
  else
  printf("strings are not comparable");
	return 0;
}
  */
  
  /*INCOMPLETE SUM OF EVEN AND ODD SERIES USING RECURSION*/
  
  int sumeven(int,int);
  int sumodd(int,int);
 int main()
{
	int n,p1=0,p2=0,i=0,j=0;
	printf("enter the end term\n");
	scanf("%d",&n);
	  p1=sumeven(n,2);
      p2=sumodd(n,1);
	printf("\nsum of even series is%d\n",p1);
	printf("\nsum of odd series is%d\n",p2);
	
	return 0;
}
  int sumeven(int n,int i){
  	
	printf("sumeven");
    if(i<n)
	return i+sumeven(n,i+2);
    
}
  int sumodd(int n, int j){
    if(j<n)
	return j+sumodd(n,j+2);

}
