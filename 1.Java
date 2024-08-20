//1. Spirally traversing a matrix//

class Solution {
 public ArrayList<Integer> spirallyTraverse(int mat[][]) {
            int n=mat[0].length;
            int m=mat.length;
             
         ArrayList<Integer> ans=new ArrayList<>();
         
           int top=0,bottom=m-1;
           int left=0,right=n-1;
         while(left <=right && top<=bottom){
    
             for(int i=left;i<=right;i++)
                ans.add(mat[top][i]);
             
             top++;
             
             for(int i=top;i<=bottom;i++)
                ans.add(mat[i][right]);
            
             
             right--;
    
             if(top<=bottom){
                 for(int i=right;i>=left;i--)
                     ans.add(mat[bottom][i]);
                     
                 
                 bottom--;
             }
             if(left<=right){
                 for(int i=bottom;i>=top;i--)
                     ans.add(mat[i][left]);
                 
                 left++;
             }    
          }
          return ans;
        }
    }