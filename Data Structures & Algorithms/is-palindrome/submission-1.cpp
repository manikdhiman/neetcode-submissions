class Solution {
public:
    bool isPalindrome(string s) {
        string good = "";
        for(int i =0; i<s.size(); i++){
            if(isalnum(s[i])){
                good.push_back(tolower(s[i]));
            }
            else{
                continue;
            }
            
           
        }
        int right =good.size()-1;
        int left = 0;
        while( left<right){
           
                if(good[right]== good[left]){
                    left++;
                    right--;
                }
                else{
                    return false;
                }
            
        }
        return true;
        
    }
};
