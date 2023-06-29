#include<iostream>
using namespace std;

int main()
{

    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;
    for (int row = 0; row < rowCount; row = row+1)
    {
        //Print spaces

        for (int col = 0; col < row; col = col+1)
        {
            cout<<" ";
        }

        //Print stars

        for (int k = 0; k < rowCount-row; k = k+1)
        {
            cout<<"* ";
        }
        
        cout<<endl;
    }
    
}