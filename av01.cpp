
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
        if(tmp%2==0)sum+=tmp;
        
    }
    cout<<sum;
    
    
}