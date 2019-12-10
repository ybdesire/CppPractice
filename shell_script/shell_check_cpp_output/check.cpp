#include <iostream>
#include <vector>

using namespace std;

int main()
{
    std::vector<int> data;

    while(true){
        int x;
        cin >> x;
        if(cin.fail()){
            break;
        }
        data.push_back(x);
    }

    int i=0;
    for(; i<data.size(); i++)
    {
        if(data[i]%2==1)//odd, return 1
        {
            return 1;
        }
     }
    if(i==data.size())//all even, return 0
    {
        return 0;
    }
}