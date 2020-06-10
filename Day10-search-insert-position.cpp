class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int mid;
        while(low<=high)
        {
            mid=low+(high-low)/2;
            if (nums[mid]==target)
                return mid;
            else if (nums[mid]<target) //search ahead
            {
                if (mid+1<n && nums[mid+1]>target)
                    return mid+1;
                else if (mid==n-1)
                    return mid+1;
                else
                    low=mid+1;
            }
            else                    //search behind
            {
                if (mid-1>=0 && nums[mid-1]<target)
                    return mid;
                else if (mid==0)
                    return mid;
                else
                    high=mid-1;
            }
                
        }
        return -1;
        
    }
};
