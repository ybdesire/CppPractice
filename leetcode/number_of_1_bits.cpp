class Solution {
public:
    int hammingWeight(uint32_t n) {
        uint32_t one = 1;
        int count = 0;
        while(n!=0)
        {
            if(n&one)
            {
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};