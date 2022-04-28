void preo(vector<int>&nums,int s,int e,vector<int> &v){
        if(s>e){
            return;
        }
        int mid=(s+e)/2;
        v.push_back(nums[mid]);
        preo(nums,s,mid-1,v);
        preo(nums,mid+1,e,v);
    }
    vector<int> sortedArrayToBST(vector<int>& nums) {
        // Code here
        vector<int>v1;
        int n=nums.size();
        preo(nums,0,n-1,v1);
        return v1;
        
    }
