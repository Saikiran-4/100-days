#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c=0,x,y;
    cin>>a>>b;
    x=a;y=b;
    while(a-- && b--)
        c++;
    cout<<"Smallest number of "<<x<<" and "<<y<<" is "<<" "<<c;
    return 0;
}
