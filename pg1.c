//No Twins PLs!!
#include<stdio.h>
#define MAX 1000

int main(){
    int a[MAX]; int flag=0;
    int i=0,n=0;
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(int j=0;j<n;j++)
    {
        int temp=a[j];
        for(int k=j+1;k<n;k++)
        {
            if(temp == a[k]){
                flag = 1; break;
            }
        }
    }
    if(flag ==1)
    printf("Array elements not distinct\n");
    else if(flag==0)
    printf("Elements are distinct");
}
