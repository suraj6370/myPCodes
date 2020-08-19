#include <bits/stdc++.h>
using namespace std;


int main(void)
{
    long long int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int l=4;
        long long int  p;
        while((l-1)<=n)
        {
            if(n%(l-1) == 0)
            {
                p=(n/(l-1));
                cout<<p<<endl;
                break;
            }
            l=l*2;
        } 
    }
	return 0;
}
