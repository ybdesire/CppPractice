#include <iostream>

using namespace std;

class A
{
public:
	virtual void fun(int x)
	{
		cout<<"A1"<<endl; 
	}
	virtual void fun(double y)
	{
		cerr<<"A2"<<endl; 
	} 	 
};

class B: public A
{
public:
	virtual void fun(int x)
	{
		cout<<"B1"<<endl; 
	} 

};


int main() {
	B b;
	A &a = b;
	a.fun(3.4);
	return 0;
}
