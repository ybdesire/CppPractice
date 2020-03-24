#include <iostream>
#include <set>

using namespace std;

int main(int argc, char** argv) {
	set<int> s;
	s.insert(10);
	s.insert(20);
	s.insert(10);
	s.insert(10);	
	s.insert(30);


	set<int>::iterator iter;
	for(iter=s.begin();iter!=s.end();iter++)
	{
		cout<<*iter<<endl;
	}
	
	return 0;
}
