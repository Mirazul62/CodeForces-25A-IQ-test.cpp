#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int  i,n,a[100000],c1=0,c2=0;
    cin>>n;
    for( i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
            c1++;
        else
            c2++;
    }


    if(c1>c2)
    {
        for(i=0; i<n; i++)
        {

            if(a[i]%2!=0)
            {
                cout<<i+1;
                break;
            }
            else
            {

            }
        }

    }
    if(c1<c2)
    {
        for(i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cout<<i+1;
                break;
            }
            else
            {

            }
        }
    }
}
