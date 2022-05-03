class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        if(s.empty()){
            return 0;
        }
        int ans=0;
        int length=0;
        int n=s.size();
        
        for(int i=0;i<n;i++){
            if(m.find(s[i])!=m.end() && m[s[i]]>=i-length){
                ans=max(ans,length);
                length=i-m[s[i]];  //3-0    moving in a window
                m[s[i]]=i;
            }
            else{
                length++;
                m[s[i]]=i;
            }
        }
        return max(ans,length);
    }
};
