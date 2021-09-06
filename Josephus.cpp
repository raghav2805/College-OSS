#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define int long long int
#define btoi(x) stoi(x,nullptr,2)
#define itob(x) bitset<32>(x).to_string()
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void recurse(vector<int> v,int ind,int k,int &ans){

    if(v.size() == 1){
        ans = v[0];
        return ;
    }

    ind = (ind + k)%v.size();
    v.erase(v.begin() + ind);

    recurse(v,ind,k,ans);
}

void solve(){
    int n,k;
    cin>>n>>k;
    k--;

    vector<int> v;
    for(int i=1;i<=n;i++){
        v.push_back(i);
    }

    int ans = -1;
    recurse(v,0,k,ans);
    cout<<ans<<endl;
}

signed main(){
    fast;

    int t=1;
    while(t--){
        solve();
    }
}