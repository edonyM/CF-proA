 /*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 #        .---.         .-----------  
 #       /     \  __  /    ------    
 #      / /     \(  )/    -----   (`-')  _ _(`-')              <-. (`-')_            
 #     //////    '\/ `   ---      ( OO).-/( (OO ).->     .->      \( OO) )     .->   
 #    //// / //  :   : ---      (,------. \    .'_ (`-')----. ,--./ ,--/  ,--.'  ,-.
 #   // /   /  / `\/ '--         |  .---' '`'-..__)( OO).-. ' |   \ |  | (`-')'.'  /
 #  //          //..\\          (|  '--.  |  |  ' |( _) | | | |  . '|  |)(OO \    / 
 # ============UU====UU====      |  .--'  |  |  / : \|  |)| | |  |\    |  |  /   /) 
 #             '//||\\`          |  `---. |  '-'  /  '  '-' ' |  | \   |  `-/   /`  
 #               ''``            `------' `------'    `-----' `--'  `--'    `--'    
 # ########################################################################################################
 # 
 # Author: edony - edonyzpc@gmail.com                 
 # 
 # twitter : @edonyzpc                                
 # 
 # Last modified: 2014-10-18 19:14
 # 
 # Filename: test.cpp
 # 
 # Description: All Rights Are Reserved                 
 ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/ 
#include<iostream>
#include<time.h>
using namespace std;
int coinb(int *fivenum);
int main()
{
    //clock_t start,finish;
    //double totaltime;
    //start=clock();
    //...
    int *num=new int[5];
    for(int i=0;i<5;i++)
    {
        cin>>num[i];
    }
    cout<<coinb(num)<<endl;
    //finish=clock();
    //totaltime=(double)(finish-start)/CLOCKS_PER_SEC;
    //cout<<"taken about "<<totaltime<<"second to execute the code"<<endl;
}
int coinb(int *fivenum)
{
    int tmp=fivenum[0]+fivenum[1]+fivenum[2]+fivenum[3]+fivenum[4];
    if(fivenum[0]==0&&fivenum[1]==0&&fivenum[2]==0&&fivenum[3]==0&&fivenum[4]==0)return -1;
    if(tmp%5!=0)return -1;
    else return tmp/5;
}
