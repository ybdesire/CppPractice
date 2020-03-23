#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	map<string, int> mp;
	mp["Sam"] = 65;
	mp["Jack"] = 88;
	mp["Ann"] = 99;
	
	// check if a key exists
	map<string, int>::iterator iter;
	iter = mp.find("Jack");
	if(iter != mp.end())
	{
	    cout<<"Find, the key is "<<iter->first<<endl;
	    cout<<"Find, the value is "<<iter->second<<endl;
	}
	else
	{
		cout<<"Do not Find"<<endl;
	}
	//map iteration
	for(iter=mp.begin();iter!=mp.end();iter++)
	{
		cout<<iter->first<<","<<iter->second<<endl;
	}

	return 0;
}
