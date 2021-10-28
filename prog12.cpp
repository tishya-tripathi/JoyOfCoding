#include <iostream>

using namespace std;


class Singleton
{
	static Singleton *obj;

	int val;

	Singleton()
	{
		val = 0;
	}

	public:
	static Singleton *getInstance()
	{
		if(!obj)
		{
			obj = new Singleton;
		}
		return obj;
	}

	void setValue(int val)
	{
		this->val = val;
	}

	int getValue()
	{
		return this->val ;
	}
};

Singleton *Singleton::obj = 0;

int main()
{
	Singleton *p = p->getInstance();

	int val;
	cout<<"Enter an int value: \n";
	cin>>val;

	p->setValue(val);
	cout<<"Value = "<< p->getValue()<<endl;

	return 0;
}
