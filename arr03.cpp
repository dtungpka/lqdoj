#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k,ans,tmp;
    int inx;
    cin>>n>>k;
    ll a[n];
    for (auto &j:a)(j)=-1;
    for (ll i = 0; i < n; i++)
    {
        cin>>tmp;
        if (tmp > k && tmp <= ans){
            inx = (tmp == ans ? inx + 1 : 0   );
            ans = tmp;
            a[inx] = i;
            
        }

    }
   
    cout<<ans<<endl;
    for (int j = 0; a[j] != -1 ;j++)cout<<a[j]+1<<' ';
    
    
}