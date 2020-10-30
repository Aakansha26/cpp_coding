#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    long long n;
    cin>>n;

    vector<ll> q;
    for(ll i=0;i<n-1;i++)
    {
        long long k;
        cin>>k;
        q.push_back(k);
    }

    ll sum = 0;
    sum = accumulate(q.begin(), q.end(), sum);
    ll tsum = (n*(n+1))>>1;
    cout<<tsum - sum;
    return 0;
}
