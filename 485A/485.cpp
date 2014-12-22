#include <iostream>
using namespace std;

int main()
{
    int a,m;
    cin>>a>>m;
    int tmp = a;
    while(tmp < m)
    {
        tmp = tmp * 2;
    }
    if(tmp % m == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
