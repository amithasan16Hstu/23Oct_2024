#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int cot(long long n)
{
   if(n == 0)
     return 1;
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}
int main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n<=9)
        {
            cout<<n-1;
        }
        else
        {
            ll d=cot(n)-1;
            ll p=1;
            while(d>0)
            {
                p*=10;
                d--;
            }
            cout<<n-p;
            
        }
        cout<<"\n";
    }
       
}