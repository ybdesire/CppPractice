#include <iostream>


using namespace std;

class A
{
	public:
		A()//default ctor 
		{
			cout<<"default-ctor"<<endl;
		}
		A(A &a)//copy ctor
		{
			cout<<"copy-ctor"<<endl;
		}

};

A test(A a)
{
	return a;
}

int main() 
{
	A a1;		// default ctor
	A a2(a1);	// copy ctor
	A a3 = a1;	// copy ctor
	a3 = a2; 	// operator=
	cout<<"function call:"<<endl;
	test(a3);
	// first, call copy-ctor for copying a3 to para a
	// then, return will call copy-ctor since return type is obj
	// copy ctor has the init obj ability the same as default-ctor
	return 0;
}

