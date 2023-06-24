#include<bits/stdc++.h>
using namespace std;
#define opt()ios_base::sync_with_stdio;cin.tie(0);cout.tie(0);
#define endl '\n'
#define ll long long
int main()
{
    opt();
    ll n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        for(ll i=1; i<=n;)
        {
            int a=i;
            int  b=i+1;
            cout<<b<<" "<<a<<" ";
            i=i+2;

        }
    }
    return 0;
}
