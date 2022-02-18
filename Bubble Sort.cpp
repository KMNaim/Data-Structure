#include<iostream>
using namespace std;
int main()
{
    int n,i,k,temp,ar[100];
    cout<<"Elements Number: ";
    cin>>n;
    cout<<"\nEnter the Numbers: \n";
    for(i=0;i<n;i++)
        cin>>ar[i];
    cout<<"\nSorting the Array: \n";
    for(i=0; i<(n-1); i++)
    {
        for(k=0; k<(n-i-1); k++)
        {
            if(ar[k]>ar[k+1])
            {
                temp = ar[k];
                ar[k] = ar[k+1];
                ar[k+1] = temp;
            }
        }
    }
    for(i=0; i<n; i++)
        cout<<ar[i]<<" ";
    cout<<endl;
    return 0;
}
