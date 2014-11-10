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
        if(is_coprime(l,i)==0)
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
    long tmp_min=a<b?a:b;
    long tmp_max=a>b?a:b;
    while(tmp_max%tmp_min!=0)
    {
        long tmp=tmp_max%tmp_min;
        tmp_max=tmp_min;
        tmp_min=tmp;
    }
    if(tmp_min>1)return 0;
    else return 1;
}
