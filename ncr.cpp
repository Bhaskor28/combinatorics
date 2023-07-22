// Bhaskor Roy
#include<bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define       forn(i,n)              for(int i=0;i<n;i++)
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()

#define            pb                push_back
#define          sz(a)               (int)a.size()
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define max 100000
#define mod 1000000007

ll ncr(ll n,ll r){

ll fac[max]={1};

for(int i=1;i<n+1;i++){
    fac[i]=(fac[i-1]*i)%mod;

}
ll ans=(fac[n]/(fac[n-r]*fac[r]))%mod;


return ans;
}


int main(){

ll n,r;
cin>>n>>r;
n=n+r-1;
//cout<<n<<" "<<r<<endl;
cout<<ncr(n,r)<<endl;


return 0;
}
