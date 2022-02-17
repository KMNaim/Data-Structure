#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
const int mx = 1e4 ;
int main()
{
    int data[mx] , link[mx] , avail , start , item , n , loc ;
    cout << "Total Element of list : " ;
    cin >> n ;
    for(int i = 0 ; i < n ; i++ )
    cin >> data[i] >> link[i] ;
    cout << "\tdata[ ] \t link[ ]\n ";
    for(int i = 0 ; i < n ; i++ )
    cout << "i = "<<i<<"\ "<<data[i] <<"\t\t "<< link[i] << endl ;
    cout << "Enter start: ";
    cin >> start ;
    cout << "Enter avail : ";
    cin >> avail ;
    cout << "Enter new item : " ;
    cin >> item ;
    cout << "Enter Location : ";
    cin >> loc ;
    if(avail == -1 )
    cout << "Overflow\n";
    else
        { if(loc == -1 )
        {
            start = avail;
    data[avail] = item ;
    avail = link[avail] ;
    }
    else { data[avail] = item ;
    int tmp = avail ;
    avail = link[avail] ;
    link[tmp] = link[loc] ;
    link[loc] = tmp ;
    }
    }
    cout << "\tdata[ ] \t link[ ]\n ";
    for(int i = 0 ; i < n ; i++ )
        cout << "i = "<<i<<"\t "<<data[i] <<"\t\t "<< link[i] << endl ;
    cout << "New Start : " << start << " [New Avail] : " << avail << endl;
    return 0;
    }
