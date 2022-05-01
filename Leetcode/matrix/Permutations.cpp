class Solution {
private:
void solve( vector<vector<int>>&ans , vector<int>&ds , vector<int>&arr , int n , int i){

    if(i==n){
        ans.push_back(arr);
        return ;
    }
    for(int j=i;j<n;j++){
        swap(arr[i],arr[j]);
        solve(ans,ds,arr,n,i+1);
        swap(arr[i],arr[j]);
    }
  
}
public:
vector<vector<int>> permute(vector<int>& nums) {

    int n=nums.size();
     vector<vector<int>>ans;
     vector<int>ds;
  
    
    solve(ans,ds,nums,n,0);
    return ans;
}
};
