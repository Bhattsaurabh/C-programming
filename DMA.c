#include<stdio.h>
#include<stdlib.h>
/*MALLOC*/

void main()
{   
	int *ptr;
	int n=0,i=0;
	printf("enter the size of block\n");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	{ scanf("%d",&ptr[i]);
	}
	for(i=0;i<n;i++)
	{ printf("element at %d is %d\n",i,ptr[i]);
     }
     ptr=NULL;
    free(ptr);    
}


/*CALLOC*/

void main()
{   
	int *ptr;
	int n=0,i=0;
	printf("enter the number of block\n");
	scanf("%d",&n);
	ptr=(int*)calloc(n,sizeof(int));
	printf("enter the elements of array\n");
	for(i=0;i<n;i++)
	 scanf("%d",&ptr[i]);
	for(i=0;i<n;i++)
	printf("element at %d is %d\n",i,ptr[i]);
	 ptr=NULL;
    free(ptr);    

  
}

/*REALLOC*/

void main()
{   
	int *ptr,*ptr1;
	int i=0,n2=0,n1=0;
	printf("enter the number of block\n");
	scanf("%d",&n1);
	ptr=(int*)calloc(n1,sizeof(int));
	printf("enter the elements of array\n");
	for(i=0;i<n1;i++)
	 scanf("%d",&ptr[i]);
	for(i=0;i<n1;i++)
	printf("element at %d is %d\n",i,ptr[i]);
	
	printf("enter the new size of array\n");
	 scanf("%d",&n2);
	ptr1=(int*)realloc(ptr,n2*sizeof(int));
	printf("enter the elements of array\n");
	for(i=0;i<n2;i++)
	 scanf("%d",&ptr1[i]);
	for(i=0;i<n2;i++)
	printf("new element at %d is %d\n",i,ptr1[i]);
	
	free(ptr1); 
	ptr1=NULL;
    free(ptr); 
	ptr=NULL;
      
  
}
