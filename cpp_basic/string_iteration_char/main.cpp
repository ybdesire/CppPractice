#include <iostream>
#include <string>
using namespace std;
int main(int argc, char** argv) {
	string s = "hello";
	
	for(string::iterator it=s.begin();it!=s.end();it++)
	{
		if(*it=='o')
		{
			cout<<"find o"<<endl;
		}
	}
	
	return 0;
}
