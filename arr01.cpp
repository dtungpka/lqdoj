#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,max,inx;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin>>tmp;
        if (tmp > max){
            max = tmp;
            inx = i+1;
        }
    }
    cout<<max<<endl<<inx;
    
}