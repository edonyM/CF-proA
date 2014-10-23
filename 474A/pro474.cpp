#include<iostream>
using namespace std;
char code[3][10]=
{
    {'q','w','e','r','t','y','u','i','o','p'},
    {'a','s','d','f','g','h','j','k','l',';'},
    {'z','x','c','v','b','n','m',',','.','/'}
};
int main()
{
    char dir;
    cin>>dir;
    char *in=new char[100];
    cin>>in;
    int k=0;
    while(dir=='R'&&in[k]!='\0')
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(in[k]==code[i][j])
                {
                    in[k]=code[i][j-1];
                    k++;
                }
            }
        }
    }
    while(dir=='L'&&in[k]!='\0')
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<10;j++)
            {
                if(in[k]==code[i][j])
                {
                    in[k]=code[i][j+1];
                    k++;
                }
            }
        }
    }
    cout<<in<<endl;
}
