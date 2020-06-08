class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        unsigned int count=0;
        while(n)
        {
            count+=n&1;
            //cout<<"Now count is "<<count;
            if (count>1)
                return false;
            n=n>>1;a
            
        }
        if (count==1)
            return true;
        return false;
    }
};
