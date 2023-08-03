#include<stdio.h>
#include<stdlib.h>
#define  size 5
void enqueue(int);
void dequeue();
void display();
int front=-1,rear=-1;
int a[size];


int main()
{  int c=0,x=0,i=1;
       while(i)
    {
    	printf("\n1 for enqueue\n");
    	printf("2 for dequeue\n");
    	printf("3 for display\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: 
			        enqueue(x);
    		        break;
    		
    		case 2: dequeue();
    		        break;
    		  
			case 3: display();
	        		break;        
    		
			default: printf("wrong choice\n");
    		          break;
		}
	    printf("Do you want to continue press 1 otherwise press 0\n");
    	scanf("%d",&i);
	}
       	   
	   return 0;
  }
  
  
  void enqueue(int x)
  {
  	   if((rear+1)%size == front)
    	{ 
  		  printf("queue is overflow");
  	
  	    }  
		 else if(front==-1 && rear==-1)
		   {
		   	   	printf("enter your data\n");
    	        scanf("%d",&x);
		        front=rear=0;
		        a[rear]=x;
		   }
		else{
			 	printf("enter your data\n");
    	        scanf("%d",&x);
		        rear=(rear+1)%size;
			    a[rear]=x;	
		   }		 
				
	  }
  	
  	
  void dequeue()
  {
  	if(front==-1 && rear==-1)
    	{ 
  		  printf("stack is underflow");
  	    }
  	    else if(front==rear){
			 	front=rear=-1;
				 	 }
		else{
			front=(front+1)%size;	
	     	}	
	  }
  	
  void display()
  { printf("\n");
     int i=front;
     if(front==-1 && rear==-1)
    	{ 
  		  printf("stack is underflow");
  	    }
  	    else{
		  
              while(i!=rear)
              {
  	           printf("%d\t",a[i]);
  	           i=(i+1)%size;
  	          }
  	          printf("%d\t",a[i]);
           }
  }
