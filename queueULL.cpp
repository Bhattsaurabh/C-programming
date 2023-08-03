#include<stdio.h>
#include<stdlib.h>
void enqueue();
void dequeue();
void display();
struct node {
	int data;
	struct node* next;
    };
  struct node *front=NULL,*rear=NULL;
  struct node *newnode=NULL,*ptr;



int main()
{  int c=0,i=1;
       while(i)
    {
    	printf("\n1 for enqueue\n");
    	printf("2 for dequeue\n");
    	printf("3 for display\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: enqueue();
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
  
  
  void enqueue()
  {
  	            newnode=(struct node*)malloc(sizeof(struct node));
                 printf("enter the data\n");
                 scanf("%d",&newnode->data);
  	              newnode->next=NULL;
		 if(front==NULL && rear==NULL)
		   {  
		         front=rear=newnode;
		   }
		else{
		      rear->next=newnode;
			  rear=newnode;	
		   }		 
				
	  }
  	
  	
  void dequeue()
  {  ptr=front;
  
    	if(front==NULL && rear==NULL)
    	{ 
  		  printf("stack is underflow");
  	    }
  	    else if(front==rear){
			 	front=rear=NULL;
			 	free(ptr);
			 	ptr=NULL;
				 	 }
		else{ 
			 front=front->next;	
			 free(ptr);
			 ptr=NULL;
	     	}	
	  }
  	
  void display()
  { printf("\n");
   
      if(front==NULL && rear==NULL)
      {
      	printf("Queue is underflow");
	  }
	  else{
	  
     	 ptr=front;
  	     while(ptr!=NULL)
  	      {
  	        printf("%d\t",ptr->data);
  	         ptr=ptr->next;
          }
       }
  }
