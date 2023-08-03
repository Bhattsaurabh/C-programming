#include<stdio.h>
#include<string.h>
/*WRITE DATA TO EXISTING FILE*/

int main()
{
	int n;
	FILE *fptr;
	if((fptr =fopen("C:\\file1.txt","w"))==NULL)
	{printf("file is empty");
	}
	else{
		   printf("enter the number");
		   scanf("%d",&n);
		   fprintf(fptr,"%d", &n);
		   fclose(fptr);     
	}
	return 0;
	
}



/*READ DATA FROM THE EXISTING FILE*/

int main()
{
	int n;
	FILE *fptr;
	if((fptr =fopen("C:\\file1.txt","r"))==NULL)
	{printf("file is empty");
	}
	else{
		   fscanf(fptr,"%d", &n);
		   printf("%d",n);
		   fclose(fptr);     
	}
	return 0;	
}
