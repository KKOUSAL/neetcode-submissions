class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        set<vector<int>> uniqueTriplets;
        for(int i=0;i<nums.size()-2;i++){
            map<int,int> mp;
                for(int j=i+1;j<nums.size();j++){

                    int diff = -(nums[i]+nums[j]);

                    if(mp.find(diff)!=mp.end()){
                        //if(nums[i]!=nums[j] && nums[j]!=diff && nums[i]!=diff){
                            vector<int> triplet ={
                            nums[i],
                            nums[j],
                            diff
                            };
                            sort(triplet.begin(),triplet.end());
                            uniqueTriplets.insert(triplet);
                        //}
                        
                    }
              // Store current number and its index
                    mp[nums[j]] = j;
                 }
   
        }

        return vector<vector<int>>(uniqueTriplets.begin(),uniqueTriplets.end());
        
    }
};
