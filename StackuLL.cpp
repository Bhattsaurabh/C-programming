#include<stdio.h>
#include<stdlib.h>
void push(int);
void pop();
void display();


struct node {
	int data;
	struct node* next;
    };
  struct node *top=NULL;
  struct node *newnode=NULL,*ptr;

int main()
{  int c=0,x=0;
       while(1)
    { 
    	printf("\n1 for push\n");
    	printf("2 for pop\n");
    	printf("3 for display\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: printf("enter your data\n");
                	scanf("%d",&x);
			        push(x);
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
  
  void push(int x)
  {
  	newnode=(struct node*)malloc(sizeof(struct node));
  	newnode->data=x;
  	newnode->next=top;
  	top=newnode;
  	
  }
  
  
  void pop()
  {
  	if(top==NULL)
  	  printf("STACK IS UNDERFLOW");
  	  else{	
  	ptr=top;
  	top=top->next;
  	free(ptr);
  	ptr=NULL;
       }
  }
  
  
  void display()
  {
  	if(top==NULL)
  	  printf("STACK IS UNDERFLOW");
  	  else{	ptr=top;
  	         while(ptr->next!=NULL)
  	          {
  	          	printf("%d\t",ptr->data);
  	          	ptr=ptr->next;
  	         	
			   }
			   printf("%d\t",ptr->data);
          }
  }
