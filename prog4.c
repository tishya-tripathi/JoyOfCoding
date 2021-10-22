#include<stdio.h>

int main()
{
	int arr[50], sum,n , i, j, flag;
	flag=0;

	printf("Enter n");
	scanf("%d", &n);
	
	printf("Enter array:");
	for(int i=0; i<n; i++)	
		scanf("%d", &arr[i]);
	printf("Enter sum:");
	scanf("%d", &sum);

	for(int i=0; i<n-1; i++)
	{
		for(int j=(i+1); j<n; i++)
		{		
			if(arr[i]+arr[j]==sum)
			{
				printf("Indices are found at %d and %d \n", i, j);
				if(flag==0)
					flag=1;	
			}
		}
	}

	if(flag==0)
		printf("No indices found\n"); 

	return 0;
				
}




































































