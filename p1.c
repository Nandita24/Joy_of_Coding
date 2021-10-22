//Program 2
#include<stdio.h>
#define MAX 1000

int main()
{
	int a[MAX]; int flag=0;
	int sum=0,n=0;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	printf("Enter aray elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	printf("Enter the sum\n");
	scanf("%d",&sum);
	
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]+a[j])== sum)
			{
				flag=1;
				printf("Indices found at %d and %d\n",i,j);break;
			}
		}
	}
	if(flag==0)
	printf("No indices found\n");
}
	
			
		
		
		

	

	


