//17.Maximize The Cut Segments//
class Solution
{
    public:
    //Function to find the maximum number of cuts.
    
    int solve(int n, int x, int y, int z,vector<int>&dp){
       
        if(n==0)return 0;
        if(n<0)return INT_MIN-(-1e4);
        if(dp[n]!=-1)return dp[n];
        int ch1=1+solve(n-x,x,y,z,dp);
        int ch2=1+solve(n-y,x,y,z,dp);
        int ch3=1+solve(n-z,x,y,z,dp);
        return dp[n]=max({ch1,ch2,ch3});
    }
    int maximizeTheCuts(int n, int x, int y, int z)
    {
        //Your code here
        //memset(dp,-1,sizeof dp);
        vector<int>dp(n+1,-1);
        int ans=solve(n,x,y,z,dp);
        return ans<0?0:ans;
    }
};

