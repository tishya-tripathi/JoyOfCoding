#include<stdio.h>

int main()
{
	char s[100];
	gets(s);
	s[99]='\0';
	
	//printf("...1\n");	
	printf("%c", s[0]);
	int i=1;
	//printf("\n...1\n");	
	while(s[i] != '\0')
	{
		if(s[i-1] == ' ')
			printf("%c", s[i]);
		i++;
	} 
	//printf("...1\n");	
	return 0;
}

