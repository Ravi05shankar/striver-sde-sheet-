#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define endl "\n"
using namespace std;

int main()
{
   int n;cin>>n;
   int cnt=0;
   int num=0;
   while(n!=0){
    int dig=n%10;
     if(num>INT_MAX/10 || num<INT_MIN/10)
           cout<<0<<endl;  // this condition is because in question said that if num is greater than INT_MIN or INT_MAX
        //    then we have to return 0;
     num=num*10+dig;
     n/=10;
   }
   cout<<num<<endl;
    return 0;
}

//leetcode solution

// class Solution {
// public:
//     int reverse(int x) {
//       int ans=0;
//         int digit=0;
//         while(x!=0){
//             digit=x%10;
//              if(ans>INT_MAX/10 || ans<INT_MIN/10)
//                 return 0;
//             ans=(ans*10) + digit;
           
//             x/=10;
//         }
//         return ans;
//     }
// };