class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        int complement;
        for (int j=0;j<nums.size();++j){
            complement=target - nums[j];
            if(hash.find(complement) != hash.end()){
                return{hash[complement],j};
            }
            hash[nums[j]]=j;
        }
        return{};
    }
};