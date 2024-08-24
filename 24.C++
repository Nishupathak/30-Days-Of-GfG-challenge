//24.0 - 1 Knapsack Problem//
class Solution 
{
    public:
    
    int knapSack(int W, vector<int>& wt, vector<int>& val) 
    {
        int n = wt.size();
        vector<int> KnapSk(W + 1, 0);

        for (int i = 0; i < n; i++) 
        {
            for (int w = W; w >= wt[i]; w--) 
            {
                KnapSk[w] = max(KnapSk[w], val[i] + KnapSk[w - wt[i]]);
            }
        }
        return KnapSk[W];
    }
};