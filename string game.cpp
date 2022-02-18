#include<cstdio>
#include<stack>
#include<cstring>
using namespace std;
const int N=1e5+50;
char s[N];
int len,Ans;
stack<char>qwq;
int main()
{
    scanf("%s",s);
    len=strlen(s);
    for(int i=0;i<len;i++){
        if(qwq.empty()||s[i]!=qwq.top())
            qwq.push(s[i]);
        else
            Ans++,qwq.pop();
    }
    puts(Ans&1?"Yes":"No");
    return 0;
}
