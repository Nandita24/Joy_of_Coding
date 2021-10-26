// Check whether Str2 is rotation of str 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX 1000

int main()
{
    char str1[MAX],str2[MAX],*temp,*p; int len1,len2;
    printf("Enter the string 1\n");
    scanf("%[^\n]%*c",str1);

    printf("Enter the string 2\n");
    scanf("%[^\n]%*c",str2);



    len1=strlen(str1); len2=strlen(str2);
    temp=(char *)malloc(sizeof(char)*(len1*2 + 1));
    if(len1 !=len2)
    {
        printf("Str2 is not rotated version of Str1\n"); exit(0);
    }
    temp[0]=' ';
    strcat(temp,str1);
    strcat(temp,str1);

    p=strstr(temp,str2);

    free(temp);
    if(p!=NULL)
        printf("Str2 is rotated version of Str1\n");
    else
        printf("Str2 is not rotated version of Str1\n");

}



