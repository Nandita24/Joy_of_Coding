//Most frequent letter

#include <stdio.h>
#define MAX 1000

int len(char *str)
{
	int i = 0;
	while(str[i] != '\0')
		i++;
	return i;
}

int main()
{
	char a[MAX];
	int b[26] = {0};

	printf("\nEnter your string : ");
	gets(a);

	for (int i = 0; i < strlen(a); i++)
		b[a[i] - 'a']++;

	int max = 0;

	for (int i = 0; i < 26; i++)
	{
		if (b[i] > b[max])
			max = i;
	}

	printf("\nThe most frequent character in this string is %c with a count of %d.\n", max + 'a', b[max]);
}

