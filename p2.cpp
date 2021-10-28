//Dynamic arrays

#include<iostream>
#define MAX 1000
public class array
{
	int size,count;
	int a[MAX];
	
	public array()
	{
		a=new int[1];
		size=1; count=0;
	}
	public void add(int data)
	{
		if(count==size)
			growSize();
		
		array[count++]=data;
	}
	void growSize()
	{
		size=size*2; //doubling size of array
	}
	
};
int main()
{
	array obj=new array[10];
	int size;
	cout<<"Enter the array elements\n";
	
	
		
		
		
};




