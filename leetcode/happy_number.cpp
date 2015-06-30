class Solution {
public:
	bool isHappy(int n) {
		int sum = 0;
		int maxLoopCount = 0x7fffffff;
		vector<int> ivsum;
		while (maxLoopCount>0)//end if loop too much
		{
			sum = 0;
			while (n)
			{
				sum = sum + (n % 10)*(n % 10);
				n = n / 10;
			}
			if (!ivsum.empty())
			{
				vector<int>::iterator ivtor;
				ivtor = find(ivsum.begin(), ivsum.end(), sum);
				if (ivsum.end() != ivtor)
				{
					return false;//if find the repeat sum, the following sum will be repeated
				}
				else
				{
					ivsum.push_back(sum);
				}
			}
			else
			{
				ivsum.push_back(sum);
			}
			if (1 == sum)
				return true;
			n = sum;
			maxLoopCount--;
		}
		return false;
	}
};

