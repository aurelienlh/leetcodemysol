class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int k,i,j=0;
        int sum=0;
        vector<int> temp;
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int k=0;k<nums.size();k++){
            if(k>0 && nums[k]==nums[k-1]){
                continue;
            }
            i=k+1;
            j=nums.size()-1;           
            while(i<j){
                sum=nums[k]+nums[i]+nums[j];
                if(sum==0){
                    res.push_back({nums[k], nums[i], nums[j]});
                    i++;
                    while(i<j and nums[i]==nums[i-1]){
                        i++;
                    }
                }
                else if(sum<0){
                    i++;
                }
                else{
                    j--;
                }}
            }
        return res;
    }
};