#include<iostream>

using namespace std;
int maxsteps(int n);
int minsteps(int n);
int wantedsteps(int max,int min,int m);

int main()
{
    int n,m;
    cin>>n>>m;
    int max,min;
    max=maxsteps(n);
    min=minsteps(n);
    int out;
    out=wantedsteps(max,min,m);
    cout<<out<<endl;

}
int maxsteps(int n)
{
    if(n>0&&n<=10000)return n/1;
    else return -1;
}
int minsteps(int n)
{
    if(n>0&&n<=10000)
    {
        if(n&1)return n/2+1;
        else return n/2;
    }
    else return -1;
}
int wantedsteps(int max,int min,int m)
{
    if(max==-1||min==-1)return -1;
    if(m<=0||m>10||m>max)return -1;
    for(int i=1;;i++)
    {
        if(i*m>=min&&i*m<=max)
        {
            return i*m;
            break;
        }
    }
}
