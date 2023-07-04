#include<iostream>
using namespace std;

int main()
{
    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;

    for (int row = 0; row < rowCount; row = row+1)
    {
        // Print Inverted Half Pyramid

        for (int col = 0; col < rowCount-row; col = col+1)
        {
           cout<<"*";
        }
        
        // Print Spaces
        for (int k = 0; k < 2*row+1; k = k+1)
        {
            cout<<" ";
        }
       
       // Print Inverted Half Pyramid
       
       for (int j = 0; j < rowCount-row; j = j+1)
        {
           cout<<"*";
        }
    cout<<endl;
    
    }


    for (int row = 0; row < rowCount; row = row+1)
    {
        // Print Inverted Half Pyramid

        for (int col = 0; col < row+1; col = col+1)
        {
           cout<<"*";
        }
        
        // Print Spaces
        for (int k = 0; k < 2*rowCount-2*row-1; k = k+1)
        {
            cout<<" ";
        }
       
       // Print Inverted Half Pyramid
       
       for (int j = 0; j < row+1; j = j+1)
        {
           cout<<"*";
        }
    cout<<endl;
    
    }



 
}