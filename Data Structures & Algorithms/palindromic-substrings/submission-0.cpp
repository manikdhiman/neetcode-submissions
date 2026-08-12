class Solution {
public:
    int expand( string& s, int start, int end){
        int count = 0;
        while(start >=0 && end < s.length() && s[start] == s[end] ){
            count++;
            start--;
            end++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int ans =0;
        for(int i =0; i< s.length(); i++){
        ans = ans + expand(s,i,i);
        ans = ans + expand(s, i, i+1);
        }
        return ans;
        
    }
};
