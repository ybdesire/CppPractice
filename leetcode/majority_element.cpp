//Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
//
// at least 2 number are equal when selecting 3 number from nums.
//
class Solution {
public:
	int majorityElement(vector<int>& nums) {
		int a[2][2] = { 0 };//a[i][0] is the number, a[i][1] is the number count
		int n = nums.size();
		vector<int>::iterator iter;
		for (iter = nums.begin(); iter != nums.end(); iter++)
		{
			int min_index = -1;
			int i = 0;
			for (; i < 2; i++)
			{
				if (a[i][0] == *iter)//increase the number count
				{
					a[i][1]++;
					break;
				}
				else if (a[i][0] == 0)//add the number into the count zero position
				{
					a[i][0] = *iter;
					a[i][1] = 1;
					break;
				}
			}
			if (i == 2)//cannot find an proper position
			{
				for (int j = 0; j < 2; j++)//get the min count number position
				{
					if (-1 == min_index)
					{
						min_index = 0;
					}
					else
					{
						if (a[j][1] < a[min_index][1])
						{
							min_index = j;
						}
					}
				}
				if (-1 != min_index)//replace the min count number
				{
					a[min_index][0] = *iter;
					a[min_index][1] = 1;
				}
			}
		}

		for ( int i = 0; i < 2; i++)
		{
			if ((n%2!=0 && a[i][1]>n / 2)||(n%2==0 && a[i][1]>=n/2))
			{
				return a[i][0];
			}
		}
	}
};
