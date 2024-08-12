class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        aux(root,res);
        return(res);

    }
    void aux(TreeNode* cur,vector<int> &res){
        if(cur!=NULL){
        
            aux(cur->left,res);
            cout<<cur->val;
            res.push_back(cur->val);
            aux(cur->right,res);
        }
    }
};