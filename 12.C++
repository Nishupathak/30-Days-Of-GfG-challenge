//12.Sum of Middle elements of two sorted arrays//

class Solution {
  public:
    int SumofMiddleElements(vector<int> &arr1, vector<int> &arr2) {
        int n=arr1.size();
         vector<int>v;
            for(int i=0;i<n;i++){
                v.push_back(arr1[i]);
                v.push_back(arr2[i]);
            }
            sort(v.begin(),v.end());
            int sum=v[((2*n)/2)-1]+v[(2*n)/2];
            return sum;
    }
};



