//Program 1

#include<stdio.h>
#define MAX 100

int main()
{
	int a[MAX],i,j,k;
	int n; int b[MAX];
	printf("Enter no of ballons\n");
	scanf("%d",&n);
	printf("Enter the ballons present\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=0;
	}
	printf("The ballon picked without repetation are\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[i]=1;
			}
		}
		if(b[i]==0)
		printf("%d\n",a[i]);
	}
}
