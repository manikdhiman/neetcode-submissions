class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxstore = 0;
        int i =0;
        int j = heights.size()-1;
        while(i<j){
            int currentHeights = min(heights[i], heights[j]);
            int width = j-i;
            maxstore = max(maxstore, currentHeights*width);

            if(heights[i]>heights[j]){

                j--;

            }
            else{
                i++;
            }
        }
        return maxstore;
        
        
    }
};
