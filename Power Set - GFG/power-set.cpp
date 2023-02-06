//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	
	void solve(string s,vector<string>&ans,string temp,int i){
	    if(i==s.size()){
	       if(temp!="") ans.push_back(temp);
	        return;
	    }
	    //take
	    solve(s,ans,temp+s[i],i+1);
	    
	    
	    //notTake
	    solve(s,ans,temp,i+1);
	    
	}
		vector<string> AllPossibleStrings(string s){
		   vector<string>ans;
		   solve(s,ans,"",0);
		   sort(ans.begin(),ans.end());
		   return ans;
		   
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends