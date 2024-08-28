//28.Sorting Elements of an Array by Frequency//
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    static bool compare(pair<int,int> A, pair<int,int> B){
        if(A.second==B.second){
            return A.first<B.first;
        }
        return A.second>B.second;
        
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        vector<int> ans;
        vector<pair<int,int>> v;
        unordered_map<int,int> freq;
        for(auto it:arr){
            freq[it]++;
        }
        for(auto it:freq){
            v.push_back({it.first,it.second});
        }
        sort(v.begin(),v.end(),compare);
        for(auto it:v){
            for(int i=0;i<it.second;i++){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};