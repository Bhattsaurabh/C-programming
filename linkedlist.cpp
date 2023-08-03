#include<stdio.h>
#include<stdlib.h>
void create();
void insertAtBeg();
void insertAtPos();
void insertAtEnd();
void deleteFromBeg();
void deleteFromPos();
void deleteFromEnd();
void deleteSecondlast();
void reverse();
void deletesecondLastNode();
void display();
struct node {
	int data;
	struct node* next;
    };
  struct node *head=NULL;
  struct node *newnode=NULL,*ptr;
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
    	printf("6 for deletionFromEnd\n");
    	printf("7 for deletionFromEnd\n");
    	printf("8 for reverse\n");
    	printf("9 for deleteSecondLast\n");
    	printf("10 for delete second last node\n");
    	printf("11 for display\n");
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
    		        
    		case 8: reverse();
    		        break;
    		        
    		case 9: deleteSecondlast();
    		        break;
    		        	
			case 10: deletesecondLastNode();
    		        break;
    		
			case 11: display();
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
      	head=ptr=newnode;
	  }
	else{
		ptr->next=newnode;
		ptr=newnode;
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
            newnode->next=NULL;
	    	newnode->next=head;
	    	head=newnode;
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
	        int pos=0,count=1;
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
            newnode->next=NULL;
            
             ptr=head;
             while(ptr!=NULL)
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
            newnode->next=NULL;
	    	ptr->next=newnode;
	    	ptr=newnode;
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
	    	while(ptr!=NULL)
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
          while(ptr->next!=NULL)
	     	{   
		    prevnode=ptr;
			ptr=ptr->next;
	     	}
	    	prevnode->next=NULL;
	    	free(ptr);
	    	ptr=NULL;
	    }
   }
   

void reverse()
   {
   	if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 
	 else{
	 
         struct node *prevnode=NULL,*currentnode,*nextnode;
          prevnode=NULL;
          currentnode=head;
		  nextnode=head;
          while(nextnode!=NULL)
	     	{   
		       nextnode=nextnode->next;
		       currentnode->next=prevnode;
		       prevnode=currentnode;
		       currentnode=nextnode;
	     	}
	     	head=prevnode;
	    	
	    }
   }



void deleteSecondlast()
   {
   	if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 
	 else{
	 
         struct node *ptr,*prevnode,*q=head;
          ptr=head;
          while(ptr->next!=NULL)
	     	{   
	     	q=prevnode;
		    prevnode=ptr;
			ptr=ptr->next;
	     	}
	    	q->next=prevnode->next;
	    	free(prevnode);
	    	prevnode=NULL;
	    }
   }
   
   
void deletesecondLastNode(){
	ptr=head;
	struct node* q=NULL;
	while(ptr->next->next!=NULL)
	{   q=ptr;
		ptr=ptr->next;
	}
	q->next=ptr->next;
	free(ptr);
	ptr=NULL;
}
   
void display()
   {  
      if(head==NULL)
     {
     	printf("LINKED LIST IS EMPTY");
	 }
	 else{
	 
          ptr=head;
          while(ptr!=NULL)
          { 
            printf("%d\t",ptr->data);
         	ptr=ptr->next;
	      }
	   }
   }
