#include<iostream>
using namespace std;
int main()
{

char c[100], ch, a[100] ;
int i,j=0, sum=0;
int temp, k, N, pos, len;
cout<<"\nEnter the INPUT : ";
cin.getline (c, 100);
cout<<"\nPosition: ";
cin>>pos;

cout<<"\nLength : ";
cin>>len;
for (i=pos; i<len+pos; i++)
{
a[j]=c[i] ;
j++;
}
a[j]='\0';
cout<<"\nOUTPUT: ";
for (i=0; a [i]!='\0';i++)
{
   cout<<a [i];
}
}

