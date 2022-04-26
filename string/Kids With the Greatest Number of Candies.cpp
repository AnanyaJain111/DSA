class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int m= *max_element(candies.begin(), candies.end());
        int sum=0;
        vector<bool>v;
        for(int i=0;i<candies.size();i++){
            sum=candies[i]+extraCandies;
            if(sum>=m){
                v.push_back(true);
            }
            else{
                v.push_back(false);
            }
        }
        return v;
        
    }
};
