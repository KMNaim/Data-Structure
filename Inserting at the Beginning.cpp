#include<iostream>
using namespace std;
int main()
{
    int n,START,AVAIL,ITEM,NEW,INFO[100],LINK[100];
    cout<<"Number of the Nodes : ";
    cin>>n;
    cout<<"Information of INFO List : \n";
    for(int i=0; i<n; i++)
        cin>>INFO[i];
    cout<<"Information of LINK list : \n";
    for(int i=0; i<n; i++)
        cin>>LINK[i];
    cout<<"List for this information: \n";
    cout<<"Node no INFO \t LINK \n";
    for(int i=0; i<n; i++)
        cout<<i <<"\t "<<INFO[i] <<"\t "<<LINK[i] <<"\n";
    cout<<"New starting Node,A ode and ITEM to insert:\n";
    cin>>START>>AVAIL>>ITEM;
    if(AVAIL==-1)
        cout<<"OVERFLOW";
    else
    {

NEW=AVAIL;
AVAIL=LINK[AVAIL];
INFO[NEW]=ITEM;
LINK[NEW]=START;
START=NEW;
}
cout<<"Updated List:\n";
for(int i=0; i<n;i++)
{
     cout<<i<<"\t"<<INFO[i]<<"\t" <<LINK[i]<<"\n";
}
 cout<<"\nUpdated Starting Node: ";
  cout<<START;
   cout<<"\nUpdated Available Node:" ;
    cout<<AVAIL;
    return 0;
}
