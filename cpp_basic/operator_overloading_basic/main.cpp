#include <iostream>


using namespace std;

class A
{
	public:
		int x;
	public:
		A()
		{
			x = 1;
		}
		~A(){}
		
		A &operator+(A &a)
		{
			this->x += a.x;
			return *this;
		}
		int operator[](int i)
		{
			return this->x+666;
		}
};


int main() 
{
	A a,b;
	A c = a+b;
	cout<<c.x<<endl;
	cout<<c[0]<<endl;
	return 0;
}

