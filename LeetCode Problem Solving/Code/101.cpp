bool isSymmetric(TreeNode* root) {
        if(root == nullptr){
            return true;
        }
        return checkSymmetric(root -> left , root -> right);
    }
    
    bool checkSymmetric(TreeNode* leftT , TreeNode* rightT){
        //true case
        if(leftT == nullptr && rightT == nullptr){
            return true;
        }
        
        //false case
        if(leftT == nullptr || rightT == nullptr){
            return false;
        }
        if(leftT -> val != rightT -> val){
            return false;
        }
        
return checkSymmetric(leftT -> left, rightT -> right) && checkSymmetric(leftT -> right , rightT -> left);
