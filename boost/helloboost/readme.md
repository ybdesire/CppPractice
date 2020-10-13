# steps to run boost c++ at windows by visual studio

1. env setup by "GATS-Companion-to-Installing-BOOST.pdf"

* download boost
* install boost
* config


2. open helloboost.sln and run code at "debug x86 mode"


```
#include <iostream>
using namespace std;
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
int main() {
	cout << "Hello World!\n";
	cpp_int big("1234567890123456789012345678901234567890");
	cout << big << endl;
}
```



