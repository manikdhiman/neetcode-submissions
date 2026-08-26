class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int maxi = nums[0];
        int mini = nums[0];
        int ans = nums[0];
        for(int i =1; i< nums.size(); i++){
            int x = nums[i];
            int temp_maxi = max(x, max(maxi * x, mini * x));
            mini = min(x, min(maxi * x, mini * x));
            maxi = temp_maxi;
            ans = max(ans, maxi);
            
        }
        return ans;
    }
};