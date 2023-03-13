//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
   long long gcdi(long long a,long long b){
       if(a==0)
       return b;
       if(b==0)
       return a;
       return gcdi(b,a%b);
   }
 
  
    vector<long long> lcmAndGcd(long long A , long long B) {
    //   long long gcd=__gcd(A,B);
    //   long long lcm=(A*B)/gcd;
    //   return {lcm,gcd};
    long long gcd=gcdi(A,B);
    long long lcm=(A*B)/gcd;
    return {lcm,gcd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends