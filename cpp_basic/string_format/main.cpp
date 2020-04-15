#include <iostream>
#include <string>

using namespace std;
 
int main() 
{
	char buff[100];
  	snprintf(buff, sizeof(buff), "%s, %f, %d", "Hello", 3.14, 666);
  	string buffAsStdStr = buff;
	cout<<buffAsStdStr<<endl;
}

