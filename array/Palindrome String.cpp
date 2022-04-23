class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    vector<char>v;
        for(int i=0;i<S.size();i++){
            v.push_back(S[i]);
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]!=S[i]){
            return 0;
            }
        
	    }
	    return 1;
	}
};v
