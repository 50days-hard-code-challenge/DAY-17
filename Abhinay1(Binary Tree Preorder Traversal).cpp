lass Solution {
public:
   /* void solve(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;
        }
        ans.push_back(root->val);
        solve(root->left,ans);
        
        solve(root->right,ans);
    }*/
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        /*solve(root,ans);
        return ans;*/
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
                   root=st.top();
                   ans.push_back(root->val);
                   st.pop();
                   if(root->right!=NULL){
                     st.push(root->right);
                   }
                   if(root->left!=NULL){
                     st.push(root->left);
                   }    
            
        }
        return ans;

    }
};
