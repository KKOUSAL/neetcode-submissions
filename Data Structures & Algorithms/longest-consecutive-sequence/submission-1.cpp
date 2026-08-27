class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // int n = nums.size();
        // int result = -1;
        // for(int i =0;i<n;i++){
        //     int k = nums[i];
        //     vector<int> subArr;
        //     subArr.push_back(k);
        //     for(int j = i+1;j<n;j++){

        //         if(nums[j]-k > 1 || nums[j]-k <1){
        //             continue;
        //         }

        //         if(nums[j]-k == 1){

        //             subArr.push_back(nums[j]);
        //             k = nums[j];

        //         }
            

        //     }
        //     result = max(result,(int)subArr.size());

        // }

        // return result;
        set<int> st;
        for(int num : nums){
             st.insert(num);
        }

        if(st.empty()){
            return 0;
        }

        auto prev = st.begin();
        auto nxt = next(prev);
        int count =1;
        int longest =1;
        while(nxt != st.end()){
            if(*nxt == *prev +1){
                
                count++;  
            }
            else{
                count=1;
            }
            longest = max(longest,count);
            prev++;
            nxt++;

        }
        return longest;

        
    }
};
