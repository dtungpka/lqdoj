#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int main(){
    string s;
    getline(cin,s);
    //if CAPITAL, change to lowercase
    //if lowercase, change to CAPITAL
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')s[i]+=32;
        else if(s[i]>='a'&&s[i]<='z')s[i]-=32;
    }
    cout<<s;
}