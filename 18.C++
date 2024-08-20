//18.Split an array into two equal Sum subarrays//
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        int n=arr.size();
        long long sum=0;
        for (int i=0;i<n;i++){
            sum+=arr[i];
        }
        if (sum%2!=0){
            return false;
        }
        long long t=sum/2;
        long long k=0;
        for (int i=0;i<n;i++){
            k=k+arr[i];
            if (k==t){
                return true;
            }
        }
        return false;
    }
};