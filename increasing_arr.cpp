#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        v.push_back(k);
    }

    int ans = 0;
    for(int i=1;i<n;i++)
    {
        if(a[i] >= a[i-1])
            continue;
        ans += a[i-1] - a[i];

    }

    cout<<ans;
    return 0;
}
