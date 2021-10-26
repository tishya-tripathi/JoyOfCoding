#include <stdio.h>

int main()
{
	char s[1000];
	gets(s);

	int freq[256];
	for(int i=0; i<256; i++)
	{
		freq[i]=0;
	}
	
	for(int i=0; s[i] != '\0'; i++)
	{
		if(s[i] == ' ')
			continue;		
		
		int ch=(int)s[i];
		
		freq[ch] += 1;
		
	}
	
	int maxCount, ch;
	maxCount = -1;

	for(int i=0; i<256; i++)
	{
		if(freq[i] > maxCount)
		{
			maxCount=freq[i];
			ch=i;
		}	
		
	}

	printf("Max occuring character: %c \t Count: %d\n", (char)ch, maxCount);

	return 0;
}
