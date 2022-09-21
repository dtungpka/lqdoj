#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
int main(){
    vector <int> a;
    int plate_number,plate_count=0;
    //continue get a till no input
    for (int i = 0; cin>>plate_number; i++){
        //if plate_number not in a, push it
        if (find(a.begin(), a.end(), plate_number) == a.end()){
            a.push_back(plate_number);
            plate_count++;
        }
    }
cout<<plate_count<<endl;
    
}