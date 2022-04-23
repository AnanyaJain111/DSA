class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        queue<pair<Node*,int>>q;//node,level
        map<int,int>m; //level,verticle
        q.push({root,0});
        while(!q.empty()){
            auto f=q.front();
            q.pop();
            auto node=f.first;
            int x=f.second;
            m[x]=node->data; //rightmost value i.e. it will replace with the rightmost node in the same level
            
            if(node->left)  q.push({node->left,x-1});
            if(node->right)
                q.push({node->right,x+1});
        }
        vector<int>v;
        for(auto i:m){
            v.push_back(i.second); // insert calue
        }
        return v;
    
    }
};
