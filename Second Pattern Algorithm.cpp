#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
string t , p ;
int ar[500] , t_size , p_size , sz  ;
deque< char > dq[1000] , all_chr ,tmp   ;

void characterInPattern ( ){
        for( int i = 0 ; i < p.size() ; i++ ) {
            ar[ (int) (p[i]) ]  += 1 ;
            if( ar[ (int) (p[i]) ] == 1  ) all_chr.pb( p[i] );
    }
}

void Substring_In_Pattern(){
    sz = all_chr.size();
    dq[0].pb('^') ;
    for ( int i = 0 ; i < p_size ; i++ ){
        if(i) dq[i+1] = dq[i];
        dq[i+1].push_back(p[i]) ;
    }
    //Substring
    for ( int i = 0 ; i <= p_size ; i++ ){
        for(auto a : dq[i] ) cout <<a ; cout << endl;
    }

}

int main(){


    getline( cin , t ) ;
    getline( cin , p ) ;

    t_size = t.size() ;
    p_size = p.size() ;


    characterInPattern();


    Substring_In_Pattern();


    int table[p_size+1][sz+1] ;
    memset(table , -1 , sizeof(table)) ;

    char c ;

    for(int i = 0 ; i <= sz ; i++ ){
            if(i!=sz) c = all_chr[i];
            else c = '$';

            for(int j = 0 ; j < p_size ; j++ ){
               tmp = dq[j];
               tmp.pb( c );


               while( !tmp.empty() ){

                    for(int k = 0 ; k <= p_size ; k++ ){
                        if( tmp == dq[k] ) {
                            table[j][i] = k ;
                            break;
                        }
                    }

                    if(table[j][i] != -1 ) break ;
                    tmp.pop_front() ;
               }

               if( table[j][i] == -1 ) table[j][i]+=1;
            }

    }
// TAble :
    cout <<"Qn -- >  : ";
    for( int i = 0 ; i <= sz ; i++  ) {
           if(i<sz) cout << all_chr[i] << "  ";
           else cout<<"x"<<endl;
    }
    for( int i = 0 ; i < p_size ; i++ ){
            cout << "Q"<<i << " -- >  : ";
        for(int j = 0 ; j <= sz ; j++ ){
            cout << "Q"<<table[i][j] << " ";
        }
        cout << endl;
    }

    // Finding Pattern
    int ans  = 0 , st = 0  ;
    for( int i = 0 ; i < t_size ; i++ ){
        for( int j = 0 ; j < sz ; j++ ){
            if( t[i] == all_chr[j] ){
                    //cout << st << " "<<j << " - > " << table[st][j] << endl;
                st = table[st][j] ;

                if(st == p_size) {
                    ans = i-p_size+2;
                    //cout << ans << " answer\n";
                    break ;
                }

            }
        }
        if ( ans) break;
    }

    if(ans)
        cout << "pattern is appeared in Given Text . Index : "<< ans << endl;
    else
        cout<<"Pattern doesnot Appeared in Text.\n";

return 0;
}
