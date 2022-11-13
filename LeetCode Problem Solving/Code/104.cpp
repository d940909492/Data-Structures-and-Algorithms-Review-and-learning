int maxDepth(TreeNode* root) {
    if(root == NULL){
        return 0;
    }
        int maxLeft = maxDepth(root->left);
        int maxRight = maxDepth(root->right);
        return max(maxLeft, maxRight)+1;
    }
