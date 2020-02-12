#include <iostream> 
#include <vector> 
  
using namespace std; 
  
int main() 
{ 
    vector<int> g1; 
  
    for (int i = 1; i <= 5; i++) 
        g1.push_back(i); 
  
    cout << "Size : " << g1.size() << endl; //5 
    cout << "Capacity : " << g1.capacity() << endl; //8
    
    for (int i = 0; i < 5; i++) 
        cout<<g1[i]<<","; 	
	
} 
