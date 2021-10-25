//Sub Sum
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX],b[MAX];
    int n,i,j=0,sum;
    int x,flag=0;

    printf("Enter no elements\n");
    scanf("%d",&n);

    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    printf("Enter the sum\n");
    scanf("%d",&sum);

    int k=0;
    for(int i=0;i<n;i++)
    {
        x=a[i];
        for(int j=i+1;j<=n;j++)
        {
            if(x==sum)
            {
                printf("Indices range from %d to %d\n",i,j-1);
                for(int l=i,z=0;l<j,z<j-i;z++)      b[z]=a[l++];
                 flag=1; break;
            }
            if(x>sum ||j==n)
            {

                 break;
            }

            x=x+a[j];

        }
    }
    if(flag==0)
        printf("Not possible to obtain the sum\n");

    if(flag==1)
    {
        printf("Subarray found is\n");
        for(int i=0;b[i]!=NULL;i++)
            printf("%d\t",b[i]);
    }


}
