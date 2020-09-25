/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    
     boolean isValid(TreeNode root, Integer min, Integer max){
         if(root == null) {
            return true;
         }
         
         if(min != null && root.val <= min) {
             return false;
         }
         
         if(max != null &&  root.val >= max) {
             return false;
        }
         
        if(root.left != null){
            if(!isValid(root.left,min,root.val)){
                return false;
            }
        }
       
        if(root.right != null){
            if( !isValid(root.right,root.val,max)){
                return false;
            }
        }
        
        
        return true;
    }
    
    public boolean isValidBST(TreeNode root) {
  
        return isValid(root,null,null);
    }
    
   
    
    
}