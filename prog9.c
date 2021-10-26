#include<stdio.h>
#include<string.h>

int main()
{
	char s[200], s2[200];
	printf("Enter string 1:\n");
	gets(s);
	printf("Enter string 2:\n");
	gets(s2);

	strcat(s, s2);

	//printf("Res = %s\n", s);
/*
	int len=0;
	for(int i=0; s[i] != '\0'; i++)
		len += 1;
*/
	char *isSubString;
	isSubString = strstr(s, s2);
	
	if(isSubString)
		printf("string 2 is a rotation of string 1");
	else
		printf("string 2 is NOT a rotation of string 1");
	
	

	return 0;
}

