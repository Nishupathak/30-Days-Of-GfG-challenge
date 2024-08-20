//13.Square root of a number//

class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // long long int s = 1;
        // long long int e = n;
        // long long int ans = -1;
        
        // while(s <= e){
        //     int mid = (e+s)/2;
        //     if(mid*mid < n){
        //         s = mid+1;
        //     }
        //     else{
        //         e = mid-1;
        //     }
        // }
        // return s;
        return sqrt(n);
    }
};