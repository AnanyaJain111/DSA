class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v;
        unordered_map<int,int> mp;
        for(int i=0; i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
            if(it.second>1){
                v.push_back(it.first);
            }
        }
        
        if(v.size()==0){
            return {-1};
        }
        sort(v.begin(),v.end());
        return v;
    }
};
