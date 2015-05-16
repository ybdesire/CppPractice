#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		vector<int> result;
		if (digits.size() == 0)//invalid input, NULL vector
		{
			return result;
		}
		else
		{
			int icarry = 0;
			int isum = 0;
			//vector traversal from end to begin
			for (int i = digits.size() - 1; i >= 0; i--)
			{
				if (i == digits.size() - 1)
				{
					isum = digits[i] + 1 + icarry;//plus one
				}
				else
				{
					isum = digits[i] + icarry;
				}
				icarry = isum / 10;
				result.push_back(isum % 10);
			}
			if (icarry > 0)
			{
				result.push_back(icarry);
			}
			reverse(result.begin(), result.end());
			return result;
		}
	}
};
