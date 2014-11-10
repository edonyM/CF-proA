#include<iostream>
using namespace std;

int is_coprime(long a,long b);

int main()
{
    long l,r;
    int flag=0;
    cin>>l>>r;
    for(long i=l+2;i<=r;i++)
    {
        if(is_coprime(l,i)>1)
        {
            cout<<l<<" "<<l+1<<" "<<i<<endl;
            flag++;
            break;
        }
    }
    if(flag==0)cout<<-1<<endl;
    return 0;

}

int is_coprime(long a,long b)
{
    long tmp;
    if(a>b)
    {
        tmp=a;
        a=b;
        b=tmp;
    }
    while(b%a!=0)
    {
        tmp=b%a;
        b=a;
        a=tmp;
    }
    return a;
}
