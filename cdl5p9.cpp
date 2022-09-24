#include <bits/stdc++.h>
#include <string>
using namespace std;
#define ll long long
int main(){
    //input 2 strings
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    //count the words in s1 + s2
    int count=0;
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]==' ')count++;
    }
    for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i]==' ')count++;
    }
    //output the words
    cout<<count+2;
    
    
}