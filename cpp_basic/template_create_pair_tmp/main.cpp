#include <iostream>

using namespace std; 

//template struct
template<typename T1, typename T2>
struct mypair
{
	T1 first;
	T2 second;
};

int main()
{
	mypair<int,int> ii;
	ii.first=1;
	ii.second=2;
	// below [Warning] extended initializer lists only available with -std=c++11 or -std=gnu++11
	mypair<string,float> cd{"blah",4.5};
	mypair<int,float> ce{3,4.5};
	
	return 0;
}


