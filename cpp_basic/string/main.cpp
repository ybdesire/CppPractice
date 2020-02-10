#include <iostream>
#include <string>

using namespace std;


int main(int argc, char** argv) {
	
	string s1 = "hello";
	cout<<s1<<endl;
	cout<<s1.length()<<endl;//5
	cout<<s1.compare("hella")<<endl;//1
	cout<<s1.substr(1,3)<<endl;//ell

	return 0;
}
