class Solution {
public:
    int Position(vector<int>& inorder, int n, int temp){
        for(int i = 0; i < n; i++){
            if(temp == inorder[i]){
                return i;
            }
           }
         return -1; 
    }
    
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int &prestindex,  int instindex, int n, int inlaindex){
        
        if(prestindex >= n || instindex > inlaindex){
            return NULL;
        }
        
        int temp = preorder[prestindex++];
        TreeNode* root = new TreeNode(temp); 
        
        int pos = Position(inorder, n, temp);
        
         root->left = solve(preorder, inorder, prestindex , instindex, n, pos -1);
         root->right = solve(preorder, inorder, prestindex , pos +1, n, inlaindex);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int prestindex = 0;
        int instindex = 0;
        int n = inorder.size();
        int inlaindex = n;
        
        return solve(preorder, inorder, prestindex , instindex, n, inlaindex);
    }
};
