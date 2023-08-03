#include<stdio.h>

void mergeSort(int *,int,int);
void merge(int*,int,int,int);
void insertionSort();
void selectionSort(int *,int);
int binarySearch(int*,int,int);
void quicksort(int*,int,int);
int partition(int*,int,int);
void bubbleSort();

int main()
{  int c=0,i=1;
   int a=0,b=1;
       while(i)
    {
    	printf("\n1 MERGE SORT\n");
    	printf("2 for INSERTION SORT\n");
    	printf("3 for SELECTION SORT\n");
    	printf("4 for BINARY SEARCH\n");
    	printf("5 for QUICK SORT\n");
    	printf("6 for BUBBLE SORT\n");
    	printf("enter your choice\n");
    	scanf("%d",&c);
    	
    	switch(c)
    	{
    		
    		case 1: {
			         int n=9;
 	                 int arr[n]={15,5,24,8,1,3,16,10,20};
	                 printf("before sorting\n");
	                 for(int i=0;i<n;i++)
	                  printf("%d\t",arr[i]);
	                 mergeSort(arr,0,n-1);
		             printf("\nafter sorting\n");
                     for(int i=0;i<n;i++)
	                  printf("%d\t",arr[i]);
    		        break;
    		
    	           }
    	           
    		case 2: {
		          	insertionSort();
    		       	break;
		        	}
    		  
			case 3:  {
				
			         int n=6;
                     int arr[n]={7,2,9,4,6,8};
                   	 selectionSort(arr,n);
	        		break;
			         }    
					
			case 4: {
			      	int arr[10]={1,2,3,4,5,6,7,8,9,10};
                 	int ele=5;
	                int res=binarySearch(arr,10,ele);
	                 printf("element found at %d index",res);
	        		break;  
				   }
			case 5: {
			        int n=6;
                	int arr[n]={6,3,9,5,2,8};
                    quicksort(arr,0,n-1);
	               	for(int i=0;i<n;i++)
	                 printf("%d\t",arr[i]);
	        		break;    
				   }
			case 6:{
			       bubbleSort();
	        		break;       
    		      }
    		
			default: printf("wrong choice\n");
    		          break;
		}
	    printf("\nDo you want to continue press 1 otherwise press 0\n");
    	scanf("%d",&i);
	}
       	   
	   return 0;
  }
  
/*INSERTION SORT*/


void insertionSort()
{
	int arr[5]={5,8,1,2,9};
	int arr1[5];
	arr1[0]=arr[0];
	for(int i=1;i<5;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(arr[i]<arr1[j])
			{
		    	arr1[j+1]=arr1[j];	
			
			  if(j==0)
			  {
			  	arr1[j]=arr[i];
			  }
			}
			
			else{
				arr1[j+1]=arr[i];
				break;
			}
		}
	
	}
		for(int i=0;i<5;i++)
		 printf("%d\t",arr1[i]);

	
}


/*BUBBLE SORT*/

void bubbleSort()
{    int temp=0;
	int arr[5]={5,8,1,2,9};
	for(int i=0;i<5;i++)
	{
	   for(int j=i+1;j<5;j++)
	   {
	   
	      if(arr[i]>arr[j])
	      {
	    	temp=arr[i];
	    	arr[i]=arr[j];
	    	arr[j]=temp;
        
            if(j==5-1)
             break;

		  }
	   }
	
	}
		for(int i=0;i<5;i++)
		 printf("%d\t",arr[i]);
	
	
}


/*QUICK SORT*/



void quicksort(int* arr,int low,int high){
	
	if(low<high)
	{
		int pidx=partition(arr,low,high);
		quicksort(arr,low,pidx-1);
		quicksort(arr,pidx+1,high);
	}
}

int partition(int* arr,int low,int high)
{
	int pivot=arr[high];
	int i=low-1;
	int temp=0;
	for(int j=low;j<high;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			 temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	i++;
	temp=arr[i];
	arr[i]=pivot;
	arr[high]=temp;
	return i;
}


/*BINARY SEARCH*/



int binarySearch(int *arr,int size,int ele){
	
	 int l=0,h=size-1;
	 int m=0,idx=0;
	 while(l!=h)
	 {  
	 	m=(l+h)/2;
	 
	 	if(arr[m]==ele)
	 	   {
	 	  	idx=m;
	 	  	return m;
		   }
		   
		else if(arr[m]<ele)
			l=m+1;
		
		else
		  h=m-1;
	 	
	 }	
}


/*SELECTION SORT*/

void selectionSort(int *arr,int size){
	
	for(int i=0;i<size-1;i++)
	{  int min=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			int temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
	}
	
	for(int i=0;i<size;i++)
	{
		printf("%d\t",arr[i]);
	}
	
}



/*MERGE SORT*/

void mergeSort(int *arr,int lb,int ub){
	int mid=0;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergeSort(arr,lb,mid);
		mergeSort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);
	}

}

void merge(int* arr,int lb,int mid,int ub){
	
	int i,j,k;
	int n1=mid-lb+1;
	int n2=ub-mid;
	int l[n1],r[n2];

	for(int i=0;i<n1;i++)
	  l[i]=arr[lb+i];
	
	for(int j=0;j<n2;j++)
	  r[j]=arr[mid+1+j];
	
	i=0;
	j=0;
	k=lb;
	while(i<n1 && j<n2)
	{
		if(l[i]<=r[j])
		{
			arr[k]=l[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=r[j];
			j++;
			k++;
		}
	}
	  while (i < n1) {
          arr[k] = l[i];
          i++;
          k++;
      }
	
    	while (j < n2) {
          arr[k] = r[j];
          j++;
           k++;
       }
	
	
	
	
}






  
