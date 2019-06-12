class Solution {
public:
    vector<vector<int>> v;
    
    vector<vector<int>> permute(vector<int>& nums) {
                
        vector<int> data;//blank vector
        vector<int>other_data = nums;//nums
        back_track(data, other_data);
        return v;
    }
    
    
    void back_track(vector<int>data, vector<int>other_data)
    {
        if(other_data.size()==0)
        {
            v.push_back(data);
        }
        else
        {
            for(vector<int>::iterator it=other_data.begin();it!=other_data.end();it++)
            {
                vector<int> data_tmp = data;
                data.push_back(*it);//append item to data

                vector<int> other_data_tmp = other_data;
                other_data.erase(it);

                back_track(data, other_data);
                //important below
                other_data =  other_data_tmp;
                data = data_tmp;
            }
        }
    
}
};
