
#include <bits/stdc++.h>
#include<string>
using namespace std;
#define ll long long
int main(){
    string s;
    getline(cin,s);
    //compress string, ex: aaaabbbcc -> a4b3c2
    //save to new string
    string s2;
    ll count = 1;
    for (ll i = 0; i < s.length(); i++)
    {
        if(s[i]==s[i+1])count++;
        else{
            
            if (count > 1)s2+=to_string(count);
            s2+=s[i];
            count = 1;
        }
    }
    cout<<s2;

    
    
}