#include<iostream>
using namespace std;

int foursame(int*st);
int main()
{
	int stick[6];
	for(int i=0;i<6;i++)
		cin>>stick[i];
	int ctmp=foursame(stick);
	if(ctmp==-1)
	{
		cout<<"Alien"<<endl;
	}
	else
	{
		int head[2],k=0;
		for(int i=0;i<6;i++)
		{
			if(ctmp!=stick[i])head[k++]=stick[i]; 
		}
		if(k==0)head[0]=head[1]=ctmp;
		if(k==1)head[1]=ctmp;
		if(head[0]==head[1])
		{
			cout<<"Elephant"<<endl;
		else 
		{
			cout<<"Bear"<<endl;
		}
	}
}
int foursame(int *st)
{
	int k1=st[0],k2=st[1],k3=st[2];
	int tmp1=0,tmp2=0,tmp3=0;
	for(int i=0;i<6;i++)
	{
		if(k1==st[i])tmp1++;
		if(k2==st[i])tmp2++;
		if(k3==st[i])tmp3++;
	}
	if(tmp1>=4)return k1;
	if(tmp2>=4)return k2;
	if(tmp3>=4)return k3;
	return -1;

}
