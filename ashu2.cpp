
#include <bits/stdc++.h> 
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
ll findans(ll n){
    ll steps=0;
    while(n){
        if(n&1){
            n--;
        }else{
            n/=2;
        }
        steps++;
    }
    return steps;
}
void solve(){
   ll n;
    cin>>n;
    ll steps=findans(n);
    cout<<steps;  
}

int main(){
  
        solve();
   
    return 0;
}