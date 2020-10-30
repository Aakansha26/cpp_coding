#include<bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;

    if((n > 1) && (n <=3))
    {
        cout<<"NO SOLUTION";
        return 0;
    }

    string str = "";
    for(int i=1;i<=n;i++)
    {
        if(i % 2 == 0)
        {
            cout<<i<<" ";
        }
        else
        {
            str += to_string(i) + " ";
        }
    }

    cout<<str;
    return 0;
}
