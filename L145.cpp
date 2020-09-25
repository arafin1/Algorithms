

class Solution {
private:
    vector<int>p;
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL){
            return vector<int>();
        }
        postorderTraversal(root->left);
        postorderTraversal(root -> right);
        p.push_back(root->val);
       
        return p;
    }
};