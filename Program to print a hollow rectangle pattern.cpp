#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(int i=0;i<3;i++)
    {
        if(i==0||i==2)
        {
            for(int j=0;j<5;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int k=0;k<3;k++)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}