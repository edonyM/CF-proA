#include <iostream>
using namespace std;

int popcount(int x)
{
    int bits = 0;
    for(int i = 0;i < 32;i++)
    {
        if((x & (1<<i)) != 0)
            bits++;
        else
            continue;
    }
    return bits;
}

int main()
{
    int n;
    cin>>n;
    int l[n],r[n];
    for(int i=0;i < n;i++)
    {
        cin>>l[i]>>r[i];
    }
    int tmp = 0;
    int num = 0;
    for(int i=0;i < n;i++)
    {                
        for(int j = l[i];j <= r[i];j++)
        {
            int bit = popcount(j);
            if(bit > tmp)
            {
                tmp = bit;
                num = j;
            }
        }
        cout<<num<<endl;
        tmp = 0;
    }
}
