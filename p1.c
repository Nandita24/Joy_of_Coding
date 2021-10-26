//Abbreviations

#include<stdio.h>
#include<string.h>
#define MAX 1000

int main()
{
    char a[MAX];
    int i; char *ptr;
    printf("Enter the string\n");
    scanf("%[^\n]",a);

    char ch;
    int len=0;

    for(int i=0;a[i]!='\0';i++)
        len++;
    ptr=a;
    printf("%c",*(a+0));
    for(int i=0;i<len;i++)
    {
        ch=a[i];
        if(*(a+i-1)==' ' && ch >= 'A' && ch <= 'Z')
            printf("%c",a[i]);


    }
}
