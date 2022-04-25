/*https://practice.geeksforgeeks.org/problems/permutations-of-a-given-string2041/1/?page=1&status[]=unsolved&company[]=Zoho&sortBy=submissions#*/	
public:
		vector<string>find_permutation(string S)
		{
		    // Code here there
		    void swapp(string &s, vector<string> &v, int i){
	    if(i>=s.size()){
	        v.push_back(s);
	        return;
	    }
	    for(int j=i;j<s.size();j++){
	        swap(s[i],s[j]);
	        swapp(s,v,i+1);
	        swap(s[i],s[j]);
	    }
	}
		 vector<string>find_permutation(string S)
		{
		    // Code here there
		    vector<string>v;
		    int i=0;
		    swapp(S,v,i);
		    sort(v.begin(),v.end());
		    return v;
		}
		}
};
