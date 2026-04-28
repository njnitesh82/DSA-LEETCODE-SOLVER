class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        for(int i=0; i<nums.size(); i++){

            
            auto it  = mp.find(target-nums[i]);
            if (mp.end() != it){
                ans.push_back(i);
                 ans.push_back(it->second);
            }
            mp[nums[i]]  = i;
        }


    return ans;
    }
};
