#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char** argv) {
	stack<int> sk;
	sk.push(1);
	sk.push(2);
	sk.push(3);
	
	cout<<sk.top()<<endl;
	sk.pop();
	cout<<sk.top()<<endl;	
	
	return 0;
}
