#include<iostream>
using namespace std;

int main()
{
    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;

    for (int row = 0; row < rowCount; row = row+1)
    {
        for (int col = 0; col < rowCount; col = col+1)
        {
            if (row == 0 || row == rowCount-1 || col == 0 || col == rowCount-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        
    }
    cout<<endl;
    
}
}
