class Solution {
    private:
    
 vector<vector<int>>p;
   
public:
    void order(Node* root, int s){
        if(root ==NULL){
            return;
        }
        if(p.size() == s){
            p.resize(s+1);
        }
        p[s].push_back(root->val);
        for(auto i:root->children){
            order(i,s+1);
        }
        
    }
    
    vector<vector<int>> levelOrder(Node* root) {

        order(root,0);
        return p;
    }
};