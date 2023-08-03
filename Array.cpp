#include<stdio.h>
#include<math.h>
/*MAXIMUM AND MINIMUN ELEMENT IN AN ARRAY*/

int main()
{  int n=0,max=0,min=0,c;
	 
	   printf("enter the size of array");
       scanf("%d",&n);
       int a[n];
       printf("enter the elements of array");
       for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
       c=a[0];
       for(int i=1;i<n;i++)
       { 
			 if(c<a[i])
       	       c=c;
			 else
			   c=a[i];
	      }
	   printf("minimum element is %d\n",c); 
       c=a[0];
       
       for(int i=1;i<n;i++)
       { 
			 if(c>a[i])
       	       c=c;
			 else
			   c=a[i];
	      }
	   printf("maximum element is %d",c);
      return 0;
  }
  
  
  /*using single for loop*/
  
  int main()
{  int n=0,max=0,min=0;
	 
	   printf("enter the size of array");
       scanf("%d",&n);
       int a[n];
       printf("enter the elements of array");
       for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
       min=a[0];
       max=a[0];
       for(int i=1;i<n;i++)
       { 
			 if(min>a[i])
       	       min=a[i];
			 else
			   max=a[i];
	      }
	   printf("minimum element is %d\n",min); 
	   printf("maximum element is %d",max);
      return 0;
  }
 
  

/*DELETION OF ELEMENT AT A POSITION IN AN ARRAY*/

int main()
{
	int a[10],pos=0;
	
	printf("enter the elements of array\n");
	for(int i=0;i<5;i++)
	scanf("%d",&a[i]);
	
	printf("enter the position to delete element of array\n");
	scanf("%d",&pos);
	
	for(int i=pos-1;i<5-1;i++)
	{
		a[i]=a[i+1];	
	}
	
	for(int i=0;i<5;i++)
	printf("%d\n",a[i]);
	return 0;
}



/*FIND SECOND MAXIMUM ELEMENT IN AN ARRAY*/

int main()
{   
    int arr[5]={10,20,15,21,19},temp=0;
	for(int i=0;i<5;i++)
	{ 
	   for(int j=0;j<5;j++)
	   {
	   
	   
	   	if(arr[j]>arr[j+1])
	   	{
	   		temp=arr[j];
	   		arr[j]=arr[j+1];
	   		arr[j+1]=temp;
	   		
		   }
       }  
	}
		   	
	  	printf("2nd maximum element is %d\t",arr[5-2]);
	   	
	return 0;
}


/*FIND SECOND NON REPEATING ELEMENT IN AN ARRAY*/

int main()
{   int n=0,flag=0;
    printf("enter the size of array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
	  scanf("%d",&arr[i]);
    
	for(int i=0;i<n;i++)
	{ 
	   for(int j=0;j<n;j++)
	    {  
	        if(arr[i]==arr[j] && i!=j)
	          break;
	          
	        if(j==n-1)
	        {  flag++;
	            if(flag==2)
	             printf("2nd non repeating element is %d\t",arr[i]);
	        }
	    }  
	} 
	return 0;
}


/*TABLE OF A NUMBER*/

int main()
{   int n=0,count=0,flag=0;
    printf("enter the number\n");
    scanf("%d",&n);
    int arr[10]={1,2,3,4,5,6,7,8,9,10};    
	for(int i=0;i<10;i++)
	{ 
	  printf("%d X %d = %d\n",n,arr[i],n*arr[i]);
	
	} 
	return 0;
}


/*SWAP MIN AND MAX ELEMENT OF ARRAY*/

int main()
{  int n=0,max=0,min=0,c,idxi=0,idxj=0,i=0,j=0;
	 
	   printf("enter the size of array\n");
       scanf("%d",&n);
       int a[n];
       printf("enter the elements of array\n");
       for(int i=0;i<n;i++)
       scanf("%d",&a[i]);
       min=a[0];
       
	   for( i=1;i<n;i++)
       { 
			 if(min<a[i])
		     { 
		       min=min;
		       idxi=i-1;
			 }
       	      
			 else{
	              min=a[i];
	              idxi=i;
			   }
		}
	   printf("minimum element is\t %d\n",min); 
     
       max=a[0];
       for(j=1;j<n;j++)
       { 
			 if(max>a[j])
       	      {
				  max=max;
				  idxj=j-1;
			  }
			 else
			 {
			   max=a[j];
			   idxj=j;
			 }
	      }
		  printf("maximum element is\t %d\n",max);
		  
		  int temp=a[idxi];
	      a[idxi]=a[idxj];
	      a[idxj]=temp;
	      printf("array after swapping");
	      for(int i=0;i<n;i++)
          printf("%d\t",a[i]);
      return 0;
  }
  

/*LEFT ROTATION OF ARRAY      12345...45123*/

void rotateleft(int[], int, int);
void rotateleft(int arr[],int p, int n)
  { int arr1[n],i=0,j=0;
        printf("enter the array elements\n");
		for(i=0;i<n;i++)
		 scanf("%d\n",&arr[i]);
  
     	for(i=p,j=0;i<n;i++,j++)
     	{
     		arr1[j]=arr[i];
     		
		 }
		 for(j,i=0;i<p;j++,i++)
		 {
		 	arr1[j]=arr[i];
		 }
		 
		 for(j=0;j<n;j++)
		 {
		 	printf("%d\t",arr1[j]);
		 }
   }
int main()
{  int p=0,n=0;
   int arr[n];//={1,2,3,4,5};
  //  printf("array before rotation\n");
  // for(int i=0;i<5;i++)
  //		 {
  //		 	printf("%d\t",arr[i]);
  //		 }	
   printf("\nenter the size of array\n");
   scanf("%d",&n);
   printf("\nhow much left rotation is to be done\n");
   scanf("%d",&p);
   rotateleft(arr,p,n);
	   
      return 0;
  }
  
  
  /*DECIMAL TO HEXADECIMAL*/
  
  int main()
{  int sum=0,i=0,n,temp=0,rem=0,j=0;
char arr[8];
printf("enter the decimal number\n");
scanf("%d",&n);
   	   while(n!=0)
   	   {
	     rem=n%16;
	        if(rem<10)
	        {
		      temp=rem+48;
	        }
	        else
	    	{
		     temp=rem+55;
	        }
	     arr[i]=temp;
		 n=n/16;
		 j=i;
		 i++;
	   }
	for(i=j;i>=0;i--) 
          printf("%c",arr[i]);
      return 0;
  }
  
  
  /*OCCURENCE OF ALL ELEMENT OR FREQUENCY*/
  
  
int main()
{  
   int i=0,j=0,arr[10]={1,2,3,4,1,3,4,5,4,2},ele=0;
	   printf("enter a element to check its occurence");
	   scanf("%d",&ele);
	   int count=0;
	    for( i=0;i<10;i++)
       { 
		   	 if(ele==arr[i])
		     { 
		       count++;
		       printf("occurence of %d at %d\n",ele,i);
		       
			 }
			 
		}
	   printf("\n\n total occurence of %d is %d",ele,count);
	   
      return 0;
  }
 
  /*
int main()
{  int i=0,j=0,arr[10]={1,2,3,4,1,3,4,5,9,2},ele=0;
	
	   for( i=0;i<10;i++)
       { int count=0;
		 for(j=0;j<10;j++)
		 {
		   	 if(arr[i]==arr[j])
		     { 
		       count++;
			 }
          }
			 printf("occurence of %d is %d\n",arr[i],count);
		}
	   
      return 0;
  }
  */
  
  /*REVERSE OF A ARRAY*/
 
  int main()
{  int i=0,j=0,n,temp=0;
   printf("enter the size of array");
   scanf("%d",&n);
   int arr[n],arr1[n];
   printf("enter the elements of array");
   for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("array before reverse\t");
   for( i=0;i<n;i++)
    printf("%d\t",arr[i]);
	   for( i=n-1,j=0;i>=j;i--,j++)
       {    
             temp=arr[i];
		   	 arr[i]=arr[j];
		   	 arr[j]=temp;
		}
		printf("\n");
		 printf("array after reverse\t");
	   for( j=0;j<n;j++)
        printf("%d\t",arr[j]);
          	   
      return 0;
  }
  
  
  /*MENU DRIVEN PROGRAM OF ARRAY MANIPULATION*/
  
  int main()
{  int n,c=0,p=1;
   printf("enter the size of array");
   scanf("%d",&n);
   int arr[n];
   
   printf("enter the elements of array\n");
    for(int i=0;i<n;i++)
     scanf("%d",&arr[i]);
   while(p!=0)
   {
   	  printf("choose the operation to perform in an array\n1: Deletion\n2: Updation\n3: Searching\n4: Merging\n5: Inserting\n6: Traversing ");
   	  scanf("%d",&c);
   	  switch(c)
   	  {
   	  	
   	  	case 1: {
			     int pos=0;
			     printf("enter the position to delete the element\n");
   	  	         scanf("%d",&pos);
   	  	         for(int i=pos;i<n-1;i++)
                   {
                   	 arr[i]=arr[i+1];
				   }
				printf("array after deletion\n");
   	  	         for(int j=0;j<n-1;j++)
   	  	          printf("%d\t",arr[j]);
   	  	         
   	  	        }break;
   	  	       
					 
   	  	case 2:  {
			     int temp=0,pos=0;
   	  		     printf("enter the new element and position where to update\n");
   	  	         scanf("%d%d",&temp,&pos);
   	  	         for(int i=0;i<n;i++)
                   { if(i==pos)
                   	  arr[i]=temp;
				   }
			    printf("updated array\n");
   	  	         for(int j=0;j<n;j++)
   	  	          printf("%d\t",arr[j]);
   	  	        
			    } break;
   	  	
   	  	
		case 3: {int ele=0;
   	  		     printf("enter the element for searching\n");
   	  	          scanf("%d",&ele);
			     for(int i=0;i<n;i++)
			     {
			     	if(ele==arr[i])
			     	  printf("element found at %d index\n",i);
					else
					  printf("element not found at %d index\n",i);	
				 }
			    } break;
   	  	
   	  	
   	  	case 4: {
				   int arr1[n],arr2[n],i=0,size=0;
				   for(i=0;i<n;i++)
				   {
					   arr2[i]=arr[i];
				   }
				   int idx=i;
				    
				    printf("enter the size of another array\n");
				    scanf("%d",&size);
			       printf("enter the elements of another array\n");
                   for(int i=idx;i<idx+size;i++)
                    scanf("%d",&arr2[i]);
   	  		     printf("merged array\n");
				   for(int j=0;j<n+size;j++)
   	  	            printf("%d\t",arr2[j]);
			   }	break;
			   
			   
		case 5: {  printf("before inserting array\n");
				   for(int j=0;j<n;j++)
   	  	            printf("%d\t",arr[j]);
   	  	        
				   int ele=0,pos=0,temp=0,temp1=0;
			       printf("\nenter the elements you want to insert and position\n");
			       scanf("%d%d",&ele,&pos);
                   for(int i=n;i>=pos;i--)
   	  		       	  {	
						 if(i==pos)
   	  		       	      {  
								  arr[i]=ele;
								  break;
						   }
						arr[i]=arr[i-1];
					  }
   	  		       	
   	  		       printf("after insertion array\n");
				   for(int j=0;j<n+1;j++)
   	  	            printf("%d\t",arr[j]);
   	  	        
			   }	break;
			   
		case 6: { 
				printf("array after traversed\n");
   	  	         for(int j=0;j<n;j++)
   	  	          printf("%d\t",arr[j]);
   	  	         
   	  	        }break;
   	  	
   	  	default :  printf("You select wrong choice");
   	  	            break;
		 }
		 
	printf("\nDo you want to continue for more operations on array\n press 1 for continue \n press 0 for discontinue");
   	  scanf("%d",&p);	 	
   	
   }
	   
      return 0;
  }
  
  
/*2D MATRIX ROW WISE AND COL WISE TRAVERSE*/

int main()
{  
   int n1=0,n2=0,i=0,j=0; 

     printf("enter the row and columns of array\n");
	 scanf("%d%d",&n1,&n2);
	 int mat[n1][n2];
	 int mat1[n1][n2];
     printf("enter the elements of array row wise\n");
	   for(i=0;i<n1;i++)
       {  
	      for(j=0;j<n2;j++)
           {    
             scanf("%d",&mat[i][j]);
	    	}     
			 printf("\n");   
		}
		
      printf("elements of array row wise\n");
	   for(i=0;i<n1;i++)
       {  
	      for(j=0;j<n2;j++)
           {    
             printf("%d\t",mat[i][j]);
	    	}   
			 printf("\n");      
		}
		    
		    printf("enter the elements of array col wise\n");
	   for(i=0;i<n1;i++)
       {  
	      for(j=0;j<n2;j++)
           {    
             scanf("%d",&mat1[j][i]);
	    	}   
			 printf("\n");     
		}
		
      printf("elements of array col wise\n");
	   for(int i=0;i<n1;i++)
       {  
	      for(int j=0;j<n2;j++)
           {    
             printf("%d\t",mat1[i][j]);
	    	}     
			 printf("\n");  
		}
		    
      return 0;
  }
  
  /*MULTIPLICATION OF MATRIX*/
  
 int main()
{  
   int n1=0,n2=0,m1=0,m2=0,i=0,j=0; 

     printf("enter the row and columns of MATRIX1\n");
	 scanf("%d%d",&n1,&n2);
	 printf("enter the row and columns of MATRIX2\n");
	 scanf("%d%d",&m1,&m2);
	 int mat1[n1][n2];
	 int mat2[m1][m2];
	 int mat3[n1][m2];
     if(n2==m1)
     {
	 printf("enter the elements of MATRIX1\n");  
	      for(i=0;i<n1;i++)
          {
			 for(j=0;j<n2;j++) 
		     {    
               scanf("%d",&mat1[i][j]);
	    	 }     
		  }
		  printf("\n");
		  printf("enter the elements of MATRIX2\n");  
	      for(i=0;i<m1;i++)
          {
			 for(j=0;j<m2;j++) 
		     {    
               scanf("%d",&mat2[i][j]);
	    	 }     
		  }
		  
		  for(i=0;i<n1;i++)
          {  
			 for(j=0;j<m2;j++) 
			 { mat3[i][j]=0; 
			   for(int k=0;k<n2;k++)    
                 mat3[i][j]=mat3[i][j]+(mat1[i][k]*mat2[k][j]);
	    	 }
			      
		  }
		  
		  for(i=0;i<n1;i++)
          {
			 for(j=0;j<m2;j++) 
		     {    
               printf("%d\t",mat3[i][j]);
	    	 }     
	    	 printf("\n");
		  }
		  
		  
      }
      else
      {
	  printf("multiplication cannot possible");
	  }
	  return 0;  
  }
  
  
  
  /*TRANSPOSE OF MATRIX*/

  int main()
{  
   int n1=0,n2=0,i=0,j=0; 

     printf("enter the row and columns of MATRIX1\n");
	 scanf("%d%d",&n1,&n2);
	 int mat1[n1][n2];
	 int mat2[n1][n2];
     
	 printf("enter the elements of MATRIX1\n");  
	      for(i=0;i<n1;i++)
          {
			 for(j=0;j<n2;j++) 
		     {    
               scanf("%d",&mat1[i][j]);
	    	 }     
		  }
		  printf("\n");
		  
	      for(i=0;i<n1;i++)
          {
			 for(j=0;j<n2;j++) 
		     {    
               mat2[j][i]=mat1[i][j];
	    	 }     
		  }
		  
		  for(i=0;i<n1;i++)
          {
			 for(j=0;j<n2;j++) 
		     {    
               printf("%d\t",mat2[i][j]);
	    	 }     
	    	 printf("\n");
		  }
		  
		 return 0;
	}
	
	
	
/*SWAP DIAGONAL ELEMENTS*/

  int main()
{  
   int mat[3][3] ={1,2,3,4,5,6,7,8,9},temp=0,c=3;
     
     for(int i=0;i<3;i++)
	{ 
	  for(int j=0;j<3;j++)
	   printf("%d\t",mat[i][j]);
	printf("\n");
	}
     
    for(int i=0;i<c;i++)
    {
    	if(i!=c/2)
		{   
    		temp=mat[i][i];
    		mat[i][i]=mat[i][c-1-i];
    		mat[i][c-1-i]=temp;
		}
	}
		
	printf("after swapping diagonals\n\n");
	for(int i=0;i<3;i++)
	{ 
	  for(int j=0;j<3;j++)
	   printf("%d\t",mat[i][j]);
	printf("\n");
	}
	 
    	 return 0;
	}
	

