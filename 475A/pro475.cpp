#include<iostream>
using namespace std;
int main()
{
    char bus[6][26];
    bus[0][0]='+';
    bus[0][25]='+';
    //bus[0][26]=NULL;
    for(int i=1;i<25;i++)bus[0][i]='-';
    for(int i=0;i<26;i++)bus[5][i]=bus[0][i];
    for(int i=1;i<5;i++)
    {
        bus[i][0]='|';
        bus[i][25]='|';
    }
    bus[1][23]='|';bus[2][23]='|';bus[3][23]='.';bus[4][23]='|';
    bus[1][24]='D';bus[2][24]=bus[3][24]=bus[4][24]='.';
    for(int i=2;i<23;i=i+2)
    {
        bus[1][i]=bus[2][i]=bus[3][i]=bus[4][i]='.';
    }
    for(int i=3;i<23;i=i+2)
    {
        bus[3][i]='.';
    }
    int k;
    cin>>k;
    if(k-4<0)
    {
        int tmp;
        for(int i=1;i<=k;i++)
        {
            bus[i][1]='O';
            tmp=i;
        }
        for(int j=k+1;j<=4;j++)
            bus[j][1]='#';
        for(int m=3;m<22;m=m+2)
            bus[1][m]=bus[2][m]=bus[4][m]='#';
    }
    else
    {
       for(int i=1;i<=4;i++)
           bus[i][1]='O';
       int colum=(k-4)/3;
       int row=(k-4)%3;
       for(int j=3;j<colum*2+3;j=j+2)
           bus[1][j]=bus[2][j]=bus[4][j]='O';
       for(int m=1;m<=row&&row<=2;m++)
       {
           bus[m][2*colum+3]='O';
       }
       for(int n=row+1;n<3&&row<2;n++)
       {
           if(2*colum+3<22)bus[n][2*colum+3]='#';
       }
       if(row>=0&&row<=2)
       {
           if(2*colum+3<22)bus[4][2*colum+3]='#';
       }
       for(int p=2*colum+5;p<22;p=p+2)
            bus[1][p]=bus[2][p]=bus[4][p]='#';
    }
    for(int ii=0;ii<6;ii++)
    {
        for(int jj=0;jj<26;jj++)
        {
            cout<<bus[ii][jj];
        }
        if(ii==1||ii==4)cout<<')';
        cout<<endl;
    }

}


