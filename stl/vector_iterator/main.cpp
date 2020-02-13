#include<iostream> 
#include<iterator> // for iterators 
#include<vector> // for vectors 
using namespace std; 
int main() 
{ 
    vector<int> ar;
	for(int i=1;i<=5;i++)
		ar.push_back(i); 
      
    // Declaring iterator to a vector 
    vector<int>::iterator ptr; 
      
    // Displaying vector elements using begin() and end() 
    cout << "The vector elements are : "; 
    for (ptr = ar.begin(); ptr < ar.end(); ptr++) 
        cout << *ptr << " "; 
      
    return 0;     
} 

