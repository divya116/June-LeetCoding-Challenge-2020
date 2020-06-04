class Solution 
{
public:
  
    int twoCitySchedCost(vector<vector<int>>& costs) 
    {
        int res=0;
        int n=costs.size();
        
        for(int i=0; i<n ;i++)
        {   
           int k=(costs[i][0]-costs[i][1]);   //find difference A-B
           costs[i].insert(costs[i].begin(),k); //insert at beginning, i.e. 0th index of costs[i]
        }
        
        sort(costs.begin(),costs.end());   //sort in ascending order according to difference
       
        for(int i=0; i<n/2 ;i++)
        {
           res+=costs[i][1]+costs[i+n/2][2];   //for 0 to n/2 A , further B
        } 
        
        return res;
    }
};
