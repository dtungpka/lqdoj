#include <iostream>
#include <string>

using namespace std;
bool S[100];

int main()

{
int N;
string key;
cin>>N;
cin >> key;
for (int i=0;i<N;i++)
{
    string temp;
    cin >> temp;
    int curr_inx = 0;
    for (int j=0;j<temp.length();j++)
    {
        S[i] = false;
        if (temp[j]==key[curr_inx])
        {
            curr_inx++;
        }
    }
    if (curr_inx==key.length())
    {
        S[i] = true;
    }

}
for (int i=0;i<N;i++)
{
    if (S[i])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}}