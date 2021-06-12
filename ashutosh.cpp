
#include <bits/stdc++.h> 
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll gcd(ll a, ll b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve(){
    ll n;
    cin>>n;
    vector<pair<ll,ll>> vp;
    for(ll i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        vp.push_back({x,y});
    }
    if(vp.size()<3){
        cout<<0;
        return;
    }
    ll sl1_num=vp[1].second-vp[0].second;
    ll sl2_num=vp[2].second-vp[1].second;
    ll sl1_den=vp[1].first-vp[0].first;
    ll sl2_den=vp[1].first-vp[0].first;
    
    ll c1=gcd(sl1_num,sl1_den);
    sl1_num/=c1;
    sl1_den/=c1;
    ll c2=gcd(sl2_num,sl2_den);
    sl2_num/=c1;
    sl2_den/=c1;
    if(sl1_num==sl2_num && sl1_den==sl2_den){
        if(sl1_den!=0 && sl1_num!=0)
        cout<<sl1_num<<"x"<<-1*sl1_den<<"y=0";
        else
        {
            if(sl1_num==0 ){
                cout<<"y=0";
            }else{
                cout<<"x=0";
            }
        }
    }else{
        cout<<0;
    }
}

int main(){
  
        solve();
   
    return 0;
}