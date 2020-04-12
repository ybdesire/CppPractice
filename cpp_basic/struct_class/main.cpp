#include <iostream>

using namespace std;

class A
{
	int x;
};

struct B
{
public:
	int y;
protected:
	int z;
public:
	B()
	{
		y=666;
	}
	B &operator+(B &c)
	{
		this->y+=c.y;
		return *this;
	}
	void fun()
	{
		
		cout<<"B-fun, y="<<y<<endl;
	}
	
};


int main(int argc, char** argv) {
    
	A a;
	B b;
	cout<<b.y<<endl;
	b.fun();
	//cout<<a.x<<endl; //error
	return 0;
}
