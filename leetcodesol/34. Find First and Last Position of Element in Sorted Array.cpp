class Solution {
public:
    int aux(vector<int>& nums, int target,bool right){
        int l=0;int r=nums.size()-1;
        int mid;
        int pos=-1;
        while(l<=r){
            mid=l+((r-l)>>1);
            if(nums[mid]==target){
                pos=mid;
                if(right){
                    l=mid+1;
                }
                else{
                    r=mid-1;
                }
            }
            else if(nums[mid]<target){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return pos;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        res.push_back(aux(nums,target,false));
        res.push_back(aux(nums,target,true));
        return res;
    }
};