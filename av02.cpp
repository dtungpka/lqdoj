
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,sum=0;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin>>tmp;
        if(abs(tmp)%2==1)sum+=tmp;
        
    }
    cout<<sum;
    
    
}