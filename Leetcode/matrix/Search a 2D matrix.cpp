class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows= matrix.size(); //3
        int cols= matrix[0].size();
        int r=0, c=cols-1;
        while(r<rows && c>-1){
            int curcell=matrix[r][c];
            if(curcell==target){
                return true;
            }
            if(curcell>target){
                c--;
            }
            else{
                r++;
            }
        }
        return false;
    }
};
