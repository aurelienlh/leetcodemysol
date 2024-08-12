class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int moore=0;
        int candidat;
        for(int i :nums){
            if(moore==0){
                candidat=i;
            }
            if(candidat == i){
                moore++;
            }
            else{
                moore--;
            }
        }
        return candidat;
    }
};