//Arrays

#include<iostream>
using namespace std;

class Singleton{
	static Singleton *instance;
	int data;
	/*Singleton(){
		data=0;
	}*/

	public :static Singleton *getInstance()
	{
	if(!instance)
		instance=new Singleton;
	
	return instance;
	}

	int getData()
	{
		return this->data;
	}
	void setData(int data)
	{
		this->data=data;
	}
};

Singleton *Singleton::instance=0;

int main()
{
	int x;
	Singleton *s=s->getInstance();

	cin>>x;
	s->setData(x);
	cout<<s->getData()<<endl;
	return 0;
} 
	
	


