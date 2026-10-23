
class Solution {
public:
    void find(TreeNode* root,int pos,int &l,int &r){
        if(!root)
            return;

        l = min(pos,l);
        r = max(pos,r);

        find(root->left,pos-1,l,r);
        find(root->right,pos+1,l,r);
    }

    vector<vector<int>> verticalTraversal(TreeNode* root) {
        if(!root)
            return {};

        int l=0, r=0;
        find(root,0,l,r);

        vector<vector<pair<int,int>>>pos(r+1);
        vector<vector<pair<int,int>>>neg(abs(l)+1);

        queue<TreeNode*> q;
        queue<pair<int,int>>index; // {column, row}

        q.push(root);
        index.push({0, 0});

        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();

            auto [post,row]=index.front();
            index.pop();

            if(post >= 0)
                pos[post].push_back({row,temp->val});
            else
                neg[abs(post)].push_back({row, temp->val});

            if(temp->left){
                q.push(temp->left);
                index.push({post-1,row+1});
            }

            if(temp->right){
                q.push(temp->right);
                index.push({post+1,row+1});
            }
        }

        vector<vector<int>>ans;

        // Negative columns: leftmost to nearest to root
        for(int i =abs(l);i>=1;i--){
            sort(neg[i].begin(),neg[i].end());

            vector<int>col;
            for(auto &p:neg[i])
                col.push_back(p.second);

            ans.push_back(col);
        }

        // Root column and positive columns
        for(int i=0;i<=r;i++){
            sort(pos[i].begin(),pos[i].end());

            vector<int>col;
            for(auto &p :pos[i])
                col.push_back(p.second);

            ans.push_back(col);
        }
        return ans;
    }
};
