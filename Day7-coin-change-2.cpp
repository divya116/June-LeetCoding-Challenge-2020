class Solution {
public:
    int change(int amount, vector<int>& coins) 
    {
        //i-no of coins, j-amount
        int n=coins.size();
        //return n;
        vector<vector<int> > dp(n+1, vector<int> (amount+1, 0) ); //initialize to 0
        dp[0][0]=1;
        for (int i=1; i<=n; i++)
        {
            dp[i][0]=1; //amount=0, only 1 way
            for (int j=1; j<=amount; j++)
            {
                if (coins[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
            }
        }
        return dp[n][amount];
    }
};
