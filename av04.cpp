
#include <iostream>
using namespace std;
#define ll long long
int main(){
    ll n,sum=0,c=0;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        ll tmp;
        cin>>tmp;
        if(tmp<0){sum+=tmp;c++;}
        
    }
    if (c==0)
    
        cout<<-1;
else  printf("%.2f",sum/(double)c);
}