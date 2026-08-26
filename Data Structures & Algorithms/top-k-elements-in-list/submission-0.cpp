class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        map<int,int> count;

        for(int num : nums){

            count[num]+=1;

        }
        vector<pair<int,int>> freq;
        for(auto& pair : count){

            freq.push_back({pair.second,pair.first});

        }

        sort(freq.begin(),freq.end(),greater<>());

        vector<int> result;
        for(int i =0;i<k;i++){
            result.push_back(freq[i].second);
        }
        return result;
        
    }
};
