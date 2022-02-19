#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,a,b,c,temp,w;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>a>>b>>c;
        w=c-1;
        if(a==2)
        {

        for (int i = b-1; i < c; i++)
            {
            for (int j = b-1; j < w;j++)
            {
            if (a[j] > a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
            }
            w--;
            }

        }
        else
        {

            while (q-1 <r-1)
    {
        temp = a[b-1];
        a[b-1] = a[c-1];
        a[c-1] = temp;
        b++;
        r--;
    }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

}
