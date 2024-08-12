class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!=arr.size()){
            return false;
        }
        for(int i= 0;i<target.size();i++){
            if(count(target.begin(),target.end(),target[i])!=count(arr.begin(),arr.end(),target[i])){
                    return false;
            }
        }
        return true;
    }
};


// 2nd solution
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        for(int i=0;i<target.size();i++){
            if(target[i]!=arr[i]){return false;}
        }
        return true;
    }
};