#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,t;
    for(i=0;i<n;i++)
        {
        cin>>a[i];
    }
    cin>>t;
    while(t--)
        {
        int x,y,z;
        cin>>x>>y>>z;
        if(x==1)
            {
            reverse(a+y-1,a+z);
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
        else
        {
            sort(a+y-1,a+z);
            for(i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
