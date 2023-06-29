#include<iostream>
using namespace std;
int main()
{
    int rowCount;
    cout<<"Give Me Row Count Plz" <<endl;
    cin>>rowCount;

    for (int row = 0; row < rowCount; row = row+1)
    {
        // Print Spaces

        for (int col = 0; col < rowCount-row-1; col = col+1)
        {
            cout<<" ";
        }
         
         // Print Stars

         for (int k = 0; k < row+1; k = k+1)
         {
            cout<<"* ";
         }

         cout<<endl;
         
    }

    
    for (int row = 0; row < rowCount; row++)
    {

        // Print Spaces
        for (int col = 0; col < row; col = col+1)
        {
            cout<<" ";
        }
        
        // Print Starts

        for (int j = 0; j < rowCount-row; j = j+1)
        {
            cout<<"* ";
        }

        cout<<endl;
        
    }

    
    
}