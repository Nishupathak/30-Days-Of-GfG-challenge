// 3. The Celebrity Problem //

class Solution {
    public:
      // Function to find if there is a celebrity in the party or not.
      int celebrity(vector<vector<int> >& mat) {
          // code here
          int n = mat.size(), m = mat[0].size();
          //TC : O(n^2), SC : O(n)
          // int c = -1;
          // for(int i=0;i<n;i++){
          //     int cnt = 0;
          //     for(int j=0;j<m;j++){
          //         cnt += mat[i][j];
          //     }
          //     if(cnt == 0) c = i;
          // }
          
          //TC : O(n), SC : O(n)
          // stack<int> st;
          // for(int i=0;i<n;i++) st.push(i);
          // while(st.size() >= 2)
          // {
          //     int i=st.top(); st.pop();
          //     int j=st.top(); st.pop();
              
          //     //push possible celeb : 
          //     if(mat[i][j]){
          //         st.push(j);
          //     }
          //     else{
          //         st.push(i);
          //     }
          // }
          // c = st.top();
          // if(c == -1) return c;
          
          //TC : O(n), SC : O(1)
          int c = 0;
          for(int i=1;i<n;i++){
              if(mat[c][i]) c = i; //update celeb
          }
          
          for(int i=0;i<n;i++){
              if(i != c and (mat[i][c] == 0 or mat[c][i] == 1)) return -1;
          }
          
          return c;
      }
  };