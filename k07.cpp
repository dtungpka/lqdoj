
#include <iostream>
using namespace std;
#define ll long long
unsigned ll ans = 1;
unsigned long long temp;
void solve()
{
    int n;
    ans = 1;
    cin >> n;
    for (int i = 1; i < n ; i++)
    {
        
        cin >> temp;
        ans *= (temp == 0 ? 1 : temp);
    }
    cout << ans % 1234567 << endl;
}
int main()
{
    int testcases;
    cin >> testcases;
    while (testcases--)
        solve();
}