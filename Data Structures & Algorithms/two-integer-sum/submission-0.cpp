class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> seen_target;

        for(int i=0;i<nums.size();i++){

            int complement = target -nums[i];
            if(seen_target.count(complement)){
                return {seen_target[complement],i};
            }
            seen_target[nums[i]] = i;
        }
        
    }
};
