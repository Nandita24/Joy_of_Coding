//Rotation of Image
#include<stdio.h>
#define MAX 100
int main()
{
    int a[MAX][MAX],b[MAX][MAX];
     int k,l;
    int m,n;
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&m,&n);

    printf("Enter the input matrix\n");
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);

    for(int j=n-1,k=0;j<0,k<n;k++,j--)
    {
        for(int i=0,l=0;i<m,l<m;l++,i++)
            b[k][l]=a[i][j];

    }



     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            printf("%d\t",b[i][j]);
        printf("\n");
     }
}
