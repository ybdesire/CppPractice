#include <iostream>

using namespace std;

class A
{
public:
	A(){ cout<<"A-ctor"<<endl;	}
	~A(){ cout<<"A-dtor"<<endl;	}
}; 

class B: public A
{
public:
	B(){ cout<<"B-ctor"<<endl;	}
	~B(){ cout<<"B-dtor"<<endl;	}
}; 

class C: public B
{
public:
	C(){ cout<<"C-ctor"<<endl;	}
	~C(){ cout<<"C-dtor"<<endl;	}
}; 


int main() {
	C c;
	return 0;
}
