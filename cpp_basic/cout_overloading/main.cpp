#include <iostream>
#include <string>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class A
{
	public:
		int x,y;
	public:
		A()//default ctor
		{
			x = 1;
			y = 2;			
		}
		// inside class
		//operator overloading
		A &operator+(A &b)
		{
			
			b.x = this->x + b.x;
			b.y = this->y + b.y;
			return b;
		}

		friend ostream &operator<<(ostream &output, const A &a)
		{
			return output <<"hello,x="<< a.x << ",y=" << a.y ;
		}

};


	
int main(int argc, char** argv) {
	A a,b;
	a = a+b;
	cout<<a<<endl;
	
	return 0;
}
