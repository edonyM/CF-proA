#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<100000;i=i+2)
    {
        int a=i,b=i+2;
        while(b%a!=0)
        {
            int tmp;
            tmp=b%a;
            b=a;
            a=tmp;
        }
        if(a>1){cout<<"test_error!"<<endl;break;}
    }
    cout<<"true"<<endl;
}
