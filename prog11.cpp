#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cout<<"Enter array size\n";
	cin>>n;
	
	int *arr;
	arr = new(nothrow) int[n];

	if(arr == nullptr )
	{
		cout<<"Memory not available"<<endl;
		return -1;
	}
	
	for(int i=0; i<n; i++)
	{
		cout<<"Enter array elem "<<(i+1)<<endl;
		cin>>arr[i];
	}
	
	cout<<"Displaying the array :- "<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<"\t";
	}

	delete arr;

	return 0;
}
