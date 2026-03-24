class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = 0;
        set<vector<int>> ans;
        sort(nums.begin(), nums.end());

        for(int i=0; i<nums.size(); i++){
            
            int left = i+1;
            int right = nums.size()-1;    
            while(left < right){
                long long sum = (long long)nums[i] + nums[left] + nums[right];
                if(sum < target){
                        left++;
                }else if(sum > target){
                        right--;
                }else{
                    vector<int> temp = {nums[i], nums[left], nums[right]};
                    ans.insert(temp);
                    left++;
                    right--;
                    }

                }
                
                                
            }

        vector<vector<int>> result(ans.begin(), ans.end());
        return result;   
        }
        
    
};
