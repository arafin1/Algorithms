
class Solution {
    private:
     vector<vector<int>> p;
public:
    
    void order(TreeNode* root, int level){
        if(root == NULL) {
            return;
        }
        
        if(p.size() == level){
            p.resize(level + 1);
        }
    
        p[level].push_back(root->val);
        order(root -> left, level+1);
        order(root -> right, level+1);
        
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        
         order(root,0);
         return p;
    }
      

};