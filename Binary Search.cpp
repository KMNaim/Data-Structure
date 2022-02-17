#include<iostream>
using namespace std;
int main()
{
    int n,ITEM,BEG,MID,END,DATA[1000],LOC;
    cout<<"Elements Number : ";
    cin>>n;
    cout<<"\nEnter the Elements: \n";
    for(int i=0; i<n; i++)
        cin>>DATA[i];
    cout<<"\nEnter Element To Search: ";
    cin>>ITEM;
    BEG=0, END=n-1, MID=(BEG+END)/2;
    while(BEG<=END&&DATA[MID]!=ITEM)
    {
        if(ITEM<DATA[MID])
            END=MID-1;
        else
            BEG=MID+1;
        MID=(BEG+END)/2;
    }
    if(DATA[MID]==ITEM)
        LOC=MID;
    else
        LOC=NULL;
    if(LOC==NULL)
        cout<<ITEM<<" Does nor appear in DATA.";
    else
        cout<<ITEM<<" is found in Position: "<<LOC+1;
}
