
#include <bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
    string s;
    getline(cin,s);
    ll n = s.length();
    ll sum = 10;
    //sum all digit of string, till sum < 10
    while(sum>=10){
        sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += s[i]-'0';
        }
        s = to_string(sum);
        n = s.length();
    }
    cout<<sum<<endl;
    
    
}