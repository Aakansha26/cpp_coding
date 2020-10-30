#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int j=0, i = 0;
    string s;
    cin>>s;
    int n = s.size();
    int mc = 1, c = 0;
    char ansch = s[0];
    while(j < n)
    {
        if(s[i] == s[j])
        {
            c++;
            j++;
            if(c > mc)
            {
                mc = c;
                ansch = s[i];
            }
        }
        else
        {
            c = 0;
            i = j;
        }

    }

    cout<<mc;
    return 0;
}
