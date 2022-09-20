
#include <iostream>
using namespace std;
#define ll long long
int main(){
    int n,sum=0,c = 0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin>>tmp;
        if(tmp>0){sum+=tmp;c++;}
        
    }
    cout<<c<<' '<<sum;
}