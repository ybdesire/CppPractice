class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
		vector<int>::iterator iv;
		set<int> iset;
		pair<set<int>::iterator, bool> p;
		for(iv=nums.begin(); iv!=nums.end(); iv++)
		{
			p = iset.insert(*iv);
			if(!p.second)//p.second will be setted as 'false' if insert duplicate number
			{
				return true;
			}
		}
		return false;
    }
};