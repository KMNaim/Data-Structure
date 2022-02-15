#include<bits/stdc++.h>

using namespace std;
int main()
{
	int S,R,L,MAX,INDEX=-1,sl,rl,K=0;
	char p[200], t[200];
	cout<< "Enter text: ";
	cin.getline (t,200);
	cout<<"Enter a pattern: ";
	cin.getline (p,200);
	sl=strlen(t);
	rl=strlen(p);
	MAX=sl-rl+1;
	while (K<MAX)
	{
		for(L=0; L<rl;L++)
		{
			if(p[L]!=t[K+L])
				break;
		}
		if(L==rl)
{
	INDEX=K;
	break;
}
else
	K=K+1;

}
if ( INDEX==-1)
	cout<< "\nP does not appear in this text ";

      else
      	cout<<"\nP is found: INDEX "<<INDEX+1<<endl;
}

