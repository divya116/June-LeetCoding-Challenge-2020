class Solution {
public:
    vector<int> cum;
    Solution(vector<int>& w) 
    {
        for (auto num : w)
        {
            if (cum.empty())
                cum.push_back(num);
            else
                cum.push_back(cum.back()+num);
        }
        
    }
    
    int pickIndex() 
    {
        //cum.back() has sum of all weights
        int num=rand() % cum.back(); //random number bw 0 and sum-1
        auto it=upper_bound(cum.begin(), cum.end(), num); //first value in cum that is greater than num
        return it-cum.begin(); // selected index 
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */
