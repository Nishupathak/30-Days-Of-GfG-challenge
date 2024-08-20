//6. Validate an IP Address//

class Solution {
  public:
    int isValid( String str ) {
        if(str[0] == '.' or str[str.size()-1] == '.') return 0;
        int dotCount=0; 
        String temp = "";
        
        for(int i=0; i<str.size(); i++){
            if(str[i] == '.' and str[i+1] == '.') return 0;
            if(str[i] == '.'){
                dotCount++;
                int num =  str(temp);
                if(temp[0] == '0' and num != 0) return 0;
                if(num < 0 || num > 255) return 0;
                temp = "";
            }
            if(dotCount > 3) return 0;
            
            if(str[i] >= '0' and str[i] <= '9'){
                temp += str[i];
            }
        }
        
        int num =  str(temp);
        if(temp[0] == '0' and num != 0) return 0;
        if(num < 0 || num > 255) return 0;
        
        if(dotCount != 3) return 0;
        return 1;
    }
};