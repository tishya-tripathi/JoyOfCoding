#include<stdio.h>

int main()
{
	int arr[8], box[10], i, j;
	
	for(int i=0; i<10; i++)	
	{
		box[i]=0;
	}
	
	printf("Enter array:");
	for(int i=0; i<8; i++)	
	{
		scanf("%d", &arr[i]);
	}

	for(int i=0; i<8; i++)	
	{
		int x=arr[i];
		if(box[x]==0)
		{
			box[x] = 1;
			printf("Balloon %d can be placed in the box \n", (i+1));
		}	
		else
		{
			printf("Balloon %d cannot be placed in the box \n", (i+1));
		}

	}	
	
	return 0;

}
