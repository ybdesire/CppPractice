#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () 
{
	string line;
  	ifstream myfile ("data.txt");
  	if (myfile.is_open())
  	{
    	while ( getline(myfile,line) )
    	{
      		cout << line << '\n';
      		//string iteration to check char one by one
      		for(string::iterator it=line.begin();it!=line.end();it++)
      		{
      			if(*it=='t')
      			{
      				cout<<"find one char t"<<endl;
				}
			}
    	}
    	myfile.close();
  	}
  	else
  	{
  		cout << "Unable to open file"; 
	}

  	return 0;
}

