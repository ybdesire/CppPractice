// multiply_strings.cpp : bit number(strings) multiply, and return the result as string
// main logic: divide "1234" x "567" = 4x567+3x567x10+2x567x100+1x567x1000
// IDE:VS2013
// AUTHOR: ybdesire@gmail.com

#include <string>
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
	string multiply(string num1, string num2) {
		if (num1.empty() || num2.empty())
		{
			return NULL;
		}
		char *cnum1Arr = new char[num1.length()];

		for (int i = 0; i < num1.length(); i++)
		{
			cnum1Arr[i] = num1.c_str()[i]; //get every single character from string num1
		}

		// "1234" x "567" = 4x567+3x567x10+2x567x100+1x567x1000, the i below is for the item 10, 100, 1000
		stack<int> stkFinalResult;
		for (int i = 0; i < num1.length(); i++)
		{
			stack<int> stkResult = strMultiply(cnum1Arr[num1.length()-i-1], num2, i);
			stkFinalResult = stkAdd(stkFinalResult, stkResult);
		}
		//reverse result 
		stack<int> stkResult;
		while (!stkFinalResult.empty())
		{
			stkResult.push(stkFinalResult.top());
			stkFinalResult.pop();
		}
		//convert int result to string
		string strResult;
		while (!stkResult.empty())
		{
			char cnumer = stkResult.top() + '0';
			strResult += cnumer;
			stkResult.pop();
		}

		delete [] cnum1Arr;

		//if we get reslut like "0000", should output "0" for leetcode
		int zeroCount = 0;
		for (int i = 0; i < strResult.length(); i++)
		{
			if (strResult.c_str()[i] == '0')
				zeroCount++;
		}
		if (zeroCount == strResult.length())
		{
			return "0";
		}
		else
		{
			return strResult;
		}
	}
private:
	//single character multiply string, such as "2"x"567"x"100"(2)
	stack<int> strMultiply(char cnum, string strnum, int n)
	{
		stack<int> stkResult;

		while (n-- > 0)
		{
			stkResult.push(0);
		}

		int inum = atoi(&cnum);
		int carry = 0;
		int multResult = 0;

		for (int i = strnum.length()-1; i>=0; i--)
		{
			char sItem = strnum.c_str()[i];
			int item = atoi(&(sItem));
			multResult = inum*item + carry;
			carry = multResult / 10;
			stkResult.push(multResult % 10);
		}
		if (carry > 0)
		{
			stkResult.push(carry);
		}

		//reverse stack
		stack<int> tmpStk;
		while (!stkResult.empty())
		{
			tmpStk.push(stkResult.top());
			stkResult.pop();
		}

		return tmpStk;
	}

	//big number adding
	stack<int> stkAdd(const stack<int> &stk1, const stack<int> &stk2)
	{
		stack<int> stkResult;
		stack<int> tmpStk1(stk1);
		stack<int> tmpStk2(stk2);
		int icarry = 0;
		int item1 = 0, item2 = 0;
		while ((!tmpStk1.empty()) || (!tmpStk2.empty()))
		{
			if (!tmpStk1.empty())
			{
				item1 = tmpStk1.top();
				tmpStk1.pop();
			}
			else
			{
				item1 = 0;
			}
			
			if (!tmpStk2.empty())
			{
				item2 = tmpStk2.top();
				tmpStk2.pop();
			}
			else
			{
				item2 = 0;
			}

			int iResult = item1 + item2 + icarry;
			icarry = iResult / 10;
			stkResult.push(iResult % 10);
		}
		if (icarry > 0)
		{
			stkResult.push(icarry);
		}

		//reverse stack
		stack<int> tmpStk;
		while (!stkResult.empty())
		{
			tmpStk.push(stkResult.top());
			stkResult.pop();
		}
		return tmpStk;
	}
};

int _tmain(int argc, _TCHAR* argv[])
{
	Solution sln;
	string str = sln.multiply("1234", "0");
	cout << str << endl;
	getchar();
	return 0;
}

