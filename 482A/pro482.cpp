#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int f_tmp=1,e_tmp=k+1,i;
    for(i=1;i<=k+1;i++)
    {
        if(i%2!=0 && f_tmp!=e_tmp)cout<<f_tmp++<<" ";
        else cout<<e_tmp--<<" ";
    }
    for(int j=k+2;j<=n;j++)
    {
        cout<<j<<" ";
    }
    return 0;
}
