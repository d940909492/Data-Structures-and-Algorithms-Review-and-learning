int checkHeight(TreeNode* Node){
        if(Node == NULL){
            return 0;
        }
        int ls = checkHeight(Node -> left);
        if(ls == -1){
            return -1;
        }
        int rs = checkHeight(Node -> right);
        if(rs == -1){
            return -1;
        }
        if(abs(ls - rs) >1){
            return -1;
        }
        return max(ls,rs) +1;
    }
    
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        
        if(checkHeight(root) > 0){
            return true;
        }
        return false;
