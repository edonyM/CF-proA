#include <iostream>
//#include <time.h>

int iscomposite(int n);
void findconj(int num);
using namespace std;
int main()
{
    //clock_t start,finish;
    //double totaltime;
    //start=clock();
    //your code to be executed...
    int num_;
    cin>>num_;
    findconj(num_);
    //finish=clock();
    //totaltime=(double)(finish-start)/CLOCKS_PER_SEC; 
    //cout<<"consume time: "<<totaltime<<endl;
}

int iscomposite(int n)
{
    int a=n/2+1;
    for(int i=2;i<=a;i++)
    {
        if(n%i==0) return 1;
    }
    return -1;
}
void findconj(int num)
{
    for(int i=4;i<=num/2;i++)
    {
        if(1==iscomposite(i))
        {
            if(1==iscomposite(num-i))
            {
                cout<<i<<"\t"<<num-i<<endl;
                break;
            }
            continue;
        }
        continue;
    }
}
