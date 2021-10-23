//Frequency

#include<stdio.h>
#define MAX 1000

int main()
{
    int a[MAX],b[MAX],count=0;
    int i=0,n=0;

    printf("Enter no of elements in array\n");
    scanf("%d",&n);

    printf("Enter the array elements\n");
    for(int i=0;i<n;i++)
    {

        scanf("%d",&a[i]); b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count++;
                b[j]=0;//Duplicate found
            }
        }
        if(b[i]!=0)
        {
            b[i]=count;
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
            printf("Element %d occurs %d times\n",a[i],b[i]);
    }


}
