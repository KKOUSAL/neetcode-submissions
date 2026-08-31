class Solution {
public:
    int maxArea(vector<int>& heights) {

        int maxar =0;

        int start =0;
        int end = heights.size()-1;

        while(start<end){
            int width = end-start;
            int height = min(heights[start],heights[end]);

            int ar = width * height;

            maxar = max(ar,maxar);

            if(heights[start]<heights[end]){
                start++;
            }
            else{
                end--;
            }
        }

        return maxar;
        
    }
};
