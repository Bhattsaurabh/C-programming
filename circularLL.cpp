#include<stdio.h>
#include<stdlib.h>
void create();
void insertAtBeg();
void insertAtPos();
void insertAtEnd();
void deleteFromBeg();
void deleteFromPos();
void deleteFromEnd();
void countOddinfo();
void display();
struct node {
	int data;
	struct node* next;
    };
  struct node *head=NULL,*tail=NULL;
  struct node *newnode=NULL,*ptr=NULL;
int main()
{
  int c=0,i=1;
    while(i)
    {
    	printf("\n1 for create\n");
    	printf("2 for insertAtBeg\n");
    	printf("3 for insertAtPos\n");
    	printf("4 for insertAtEnd\n");
    	printf("5 for deletionFromBeg\n");
    	printf("6 for deletionFromPos\n");
    	printf("7 for deletionFromEnd\n");
    	printf("8 for count odd info\n");
    	printf("9 for display\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: create();
    		        break;
    		
    		case 2: insertAtBeg();
    		        break;
    		        
    		case 3: insertAtPos();
    		        break;
    		        
    		case 4: insertAtEnd();
    		        break;
    		        
    		case 5: deleteFromBeg();
    		        break;
    		        
    		case 6: deleteFromPos();
    		        break;
    		        
    		case 7: deleteFromEnd();
    		        break;       
    		 
			case 8: countOddinfo();
    		        break;
					       
    		case 9: display();
    		        break;
    		default: printf("wrong choice\n");
    		          break;
		}
		printf("\npress 0 for terminate otherwise press 1\n");
    	scanf("%d",&i);
		
	}
	
	free(ptr);
	ptr=NULL;
    free(head);
    head=NULL;
    free(tail);
    tail=NULL;
	free(newnode);
    newnode=NULL;
	
	return 0;
   }

void create()
   {
     
      newnode=(struct node*)malloc(sizeof(struct node));
      printf("enter the data\n");
      scanf("%d",&newnode->data);
      newnode->next=NULL;
	  if(head==NULL)
      {
      	head=tail=newnode;
	  }
	else{
		tail->next=newnode;
		tail=newnode;
		tail->next=head;
	   }
	
   }


void insertAtBeg()
   {
     if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY FIRST CREATE IT");
	 }
	 
	 else{
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL)
           {
         	printf("MEMORY NOT ALLOCATED\n");
	       }
           
		   else{
		    printf("enter the data\n");
            scanf("%d",&newnode->data);
	    	newnode->next=head;
	    	head=newnode;
	    	tail->next=head;
	        }
        }
	
   }

void insertAtPos()
   {
     if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY FIRST CREATE IT");
	 }
	 
	 else{  
	        int pos=0,count=0;
	 	   	printf("enter the position\n");
	 	   	scanf("%d",&pos);
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL)
           {
         	printf("MEMORY NOT ALLOCATED\n");
	       }
           
		   else{
		    printf("enter the data\n");
            scanf("%d",&newnode->data);
    
             ptr=head;
             while(ptr->next!=head)
            {    
           	       ptr=ptr->next;
           	        count++;
           	      if(count==pos-1)
           	    	{
					newnode->next=ptr->next;
           	    	ptr->next=newnode;
           	    	break;
				    }
				
	        }
            
	
	        }
        }
	
   }



void insertAtEnd()
   {
     if(head==NULL)
     {
     	printf("CIRCULAR LINKED LIST IS EMPTY FIRST CREATE IT");
	 }
	 
	 else{
	 
            newnode=(struct node*)malloc(sizeof(struct node));
            if(newnode==NULL)
           {
            printf("MEMORY NOT ALLOCATED\n");
	       }
		   
	    	else{
		    printf("enter the data\n");
            scanf("%d",&newnode->data);
			tail->next=newnode;
	    	tail=newnode;
	    	tail->next=head;
	        }
        }
	
   }

void deleteFromBeg()
   {
   	if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 
	 else{
	 
         struct node *ptr;
            ptr=head;
	    	head=head->next;
	    	tail->next=head;
	    	free(ptr);
	    	ptr=NULL;
	    }
   }
   

void deleteFromPos()
   {
   	if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 
	 else{
	       int pos=0,count=0;
	       printf("enter the position of node for deletion\n");
	 	   	scanf("%d",&pos);
         struct node *ptr,*prevnode;
            ptr=head;
	    	while(ptr->next!=head)
            { 
              prevnode=ptr;
           	  ptr=ptr->next;
           	  count++;
           	  if(count==pos-1)
           	  {
           	  	prevnode->next=ptr->next;
           	    free(ptr);
           	    ptr=NULL;
           	  	break;
			  }
	        }
	    	
	    }
   }

void deleteFromEnd()
   {
   	if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 
	 else{
	 
         struct node *ptr,*prevnode;
          ptr=head;
          while(ptr->next!=head)
	     	{   
		    prevnode=ptr;
			ptr=ptr->next;
	     	}
	    	prevnode->next=head;
	    	tail=prevnode;
	    	free(ptr);
	    	ptr=NULL;
	    }
   }
   


void countOddinfo()
   {  int count=0;
      if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 else{
	 
          ptr=head;
          while(ptr->next!=head)
          { 
             if(ptr->data%2!=0)
                count++;
         	ptr=ptr->next;
	      }
	      if(ptr->data%2!=0)
                count++;
	      printf("total odd information is %d\t",count);
	   }
	   
   }



void display()
   {  
      if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 else{
	 
          ptr=head;
          while(ptr->next!=head)
          { 
            printf("%d\t",ptr->data);
         	ptr=ptr->next;
	      }
	      printf("%d\t",ptr->data);
	   }
	   
   }
