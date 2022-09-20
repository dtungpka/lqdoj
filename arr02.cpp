
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,min,inx;
    cin>>n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin>>tmp;
        a[i] = tmp;
        if (i==0)min = tmp;
        if (tmp < min){
            min = tmp;
            inx = i;
        }
    }
    cout<<min<<endl;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == min){
            cout<<i+1<<' ';
        }
    }
    
}