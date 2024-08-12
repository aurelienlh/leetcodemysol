class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> res;
        for(auto it :arr){
            res[it]+=1;
        }
        for(auto it:arr){
            if(res[it]==1 && --k==0){
                return it;
            }
        }
        return "";
    }
};