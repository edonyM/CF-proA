#include<iostream>
using namespace std;
int max(int *num);
int *posval(int a,int b,int c);

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int *value=posval(a,b,c);
    cout<<max(value)<<endl;
    delete []value;
}
int *posval(int a,int b,int c)
{
    int *tmp=new int[6];
    tmp[0]=a*b*c;
    tmp[1]=a+b+c;
    tmp[2]=(a*b)+c;
    tmp[3]=a*(b+c);
    tmp[4]=(a+b)*c;
    tmp[5]=a+(b*c);
    return tmp;
}
int max(int *num)
{
    int max=0;
    for(int i=0;i<6;i++)
    {
        if(max<num[i])max=num[i];
    }
    return max;
}

