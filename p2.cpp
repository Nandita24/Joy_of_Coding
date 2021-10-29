#include <iostream>
#include <new>

using namespace std;

int main()
{
	int n;
	cout<<"Enter array size\n";
	cin>>n;

	int *a;

	a = new(nothrow) int[n];

	if(a == nullptr )
	{
		cout<<"Memory doesn't exist"<<endl;
		return -1;
	}
	cout<<"Enter array elements";

	for(int i=0; i<n; i++)
	{

		cin>>a[i];
	}

	cout<<"The  array elements are\n";
	for(int i=0; i<n; i++)
	{
		cout<<a[i]<<"\t";
	}

	delete a;

	return 0;
}
