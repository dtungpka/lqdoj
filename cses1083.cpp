#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,sum=0,tsum=0;
    cin>>n;
    tsum = n;
    for (ll i = 1; i < n; i++)
    {
        ll temp;
        cin>>temp;
        sum+=temp;
        tsum += i;
    }
    cout<<tsum-sum;


}