#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

void solve(string s1, string s2){
 //input 2 strings
    int count=0;
    //continue delete the first char of longer string till  2 string is the same
    while(s1!=s2){

        if(s1.length()>s2.length())s1.erase(0,1);
        else s2.erase(0,1);
        count++;

    }
    cout << count  << endl;
   
}
int main(){
   int testcases;
    cin>>testcases;
    vector<string> S;
    for(int i=0;i<testcases*2;i++){
        string s;
        cin>>s;
        S.push_back(s);
    }
    for(int i=0;i<testcases*2;i+=2){
        solve(S[i],S[i+1]);
    }
}