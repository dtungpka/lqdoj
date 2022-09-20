
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,pos1=-1,pos2=-1;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin>>tmp;
        if (tmp > 0 && pos1 == -1)pos1 = i+1;
        if (tmp >0 )pos2 = i+1;
        
    }
cout<<pos1<<' '<<pos2<<endl;
    
    
}