#include<stdio.h>

int binarySearch(int*,int,int);
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

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
   	int ele=5;
	 int res=binarySearch(arr,10,ele);
	 printf("element found at %d index",res);
	 return 0;
}
