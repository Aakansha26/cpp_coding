#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;

    vector<long> ans;
    int count = 0;
    int j = 0;
    while(count != n)
    {
        for(int i=j;i<n;i+=2)
        {
           ans.push_back(i+1);
        }
        j++;
    }

    for(auto x: ans)
        cout<<x<<" ";

    return 0;
}
