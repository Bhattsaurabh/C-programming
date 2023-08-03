#include<stdio.h>
#include<stdlib.h>
#define n 5
void push();
void pop();
void display();
int top=-1;
int a[n];


int main()
{  int c=0;
       while(1)
    {
    	printf("\n1 for push\n");
    	printf("2 for pop\n");
    	printf("3 for display\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: push();
    		        break;
    		
    		case 2: pop();
    		        break;
    		  
			case 3: display();
	        		break;        
    		
			default: printf("wrong choice\n");
    		          break;
		}
	}
       	   
	   return 0;
  }
  
  
  void push()
  {
  	if(top==n-1)
    	{ 
  		  printf("stack is overflow");
  	    }  
		  else {
		        top++;
			 	printf("\nenter %d element\n",top);
			 	scanf("%d",&a[top]);
				 }	
	  }
  	
  	
  void pop()
  {
  	if(top==-1)
    	{ 
  		  printf("stack is underflow");
  	    }
  	    else {
			 	printf("\%d element is removed\n",a[top]);
			 	top--;
				 }	
	  }
  	
  void display()
  { printf("\n");
     if(top==-1)
      printf("STACK IS UNDERFLOW");
  	for(int i=top;i>=0;i--)
  	  printf("%d\n",a[i]);
  }
