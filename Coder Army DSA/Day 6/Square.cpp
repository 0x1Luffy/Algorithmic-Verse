#include<iostream>
#include<vector>
using namespace std;
int main()
{
       int row,col;
       cout<<"Enter No of rows: "<<endl;
       cin>>row;
        cout<<"Enter no of Cols: "<<endl;
        cin>>col;

        for(int i=1;i<=row;i++)
        {
            for(int j=1;j<=col;j++)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
        }
}


/*

  * * * * *
  * * * * *
  * * * * * 
  * * * * *
  * * * * * 
  

*/