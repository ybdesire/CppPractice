#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char** argv) {
	vector<int> v1;
	vector<int> v2;
	vector<int> v3;
	vector<int> v4;
	
	v1.push_back(7);
	v1.push_back(8);
	v1.push_back(9);
	
	
	v2.push_back(7);
	v2.push_back(9);
	v2.push_back(8);
	
	v3.push_back(7);
	v3.push_back(8);
	v3.push_back(9);
	v3.push_back(1);
	
	v4.push_back(7);
	v4.push_back(8);
	v4.push_back(9);	
	
	if(v1==v2)
	{
		cout<<"v1==v2"<<endl;
	}	
	if(v1==v3)
	{
		cout<<"v1==v3"<<endl;
	}	
	if(v1==v4)
	{
		cout<<"v1==v4"<<endl;
	}
	

	
			
	return 0;
}
