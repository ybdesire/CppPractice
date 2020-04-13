#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string type = "Impl1";
	string type2 = "Impl1";
	//compare two string by opeartor==
	if(type==type2)
	{
		cout<<"equal"<<endl;
	}
	else
	{
		cout<<"not equal"<<endl;
	}
	//compare by m-fun
	cout<<type.compare(type2)<<endl;
	
	return 0;
}
