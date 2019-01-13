#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0,j=0;
    while(s[i+=2]!='\0')
    {
        j++;
    }
    cout<<s[j]<<endl;
    return 0;
}
