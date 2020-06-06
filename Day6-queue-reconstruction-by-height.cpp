class Solution {
public:
    
    static bool cmp( const vector<int> & a, const vector<int> & b)
    {
        return ((a[0]>b[0])||(a[0]==b[0] && a[1]<b[1]));
    }
    
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) 
    {
        sort(people.begin(), people.end(), cmp);
        vector<vector<int> > newq;
        for (int i=0; i<people.size(); i++)
        {
            if (people[i][1]==newq.size())
                newq.push_back(people[i]);
            else
                newq.insert(newq.begin()+people[i][1], people[i]); //position, value
        }
        
        return newq;
    }
};
