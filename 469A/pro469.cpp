#include<iostream>
using namespace std;
void compatible(int *X,int *Y,int n,int p,int q);

int main()
{
    int n,p,q;
    cin>>n;
    cin>>p;
    int XX[p];
    if(p>0)
    {
        for(int i=0;i<p;i++)
        {
            cin>>XX[i];
        }
    }
    cin>>q;
    int YY[q];
    if(q>0)
    {
        for(int i=0;i<q;i++)
        {
            cin>>YY[i];
        }
    }
    compatible(XX,YY,n,p,q);
}
void compatible(int *X,int *Y,int n,int p,int q)
{
    int counter=0;
    
    if(p==0&&q==0){cout<<"Oh, my keyboard!"<<endl;}
    else
    {
    		if((p==n&&n>1||q==n&n>1)||(q==n&&n>1)){cout<<"I become the guy."<<endl;}
    		else
    		{
        		for(int i=0;i<p;i++)
        		{
            		for(int j=0;j<q;j++)
            		{
                		if(X[i]==Y[j])counter++;
            		}
        		}
        		if(p+q-counter<n){cout<<"Oh, my keyboard!"<<endl; }
        		else {cout<<"I become the guy."<<endl; }
        }
    }
}
