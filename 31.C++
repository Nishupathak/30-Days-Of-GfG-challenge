//31.Sorted subsequence of size 3 //
class Solution {
  public:
    vector<int> find3Numbers(vector<int> &arr) {
        // Code here
        int a = 0, b = 0, c = 0;
        vector<int> ans;
        
        
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                for(int k=j+1;k<arr.size();k++){
                    a = arr[i];
                    b = arr[j];
                    c = arr[k];
                    
                    if(a < b && b < c){
                        ans.push_back(a);
                        ans.push_back(b);
                        ans.push_back(c);
                        return ans;
                    }
                }
            }
        }
        return ans;
    }
};