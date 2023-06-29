#include<iostream>
using namespace std;
 int main()
 {

    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;
    for (int row = 0; row < rowCount; row = row+1)
    {
       // Print Spaces

       for (int col = 0; col < rowCount-row-1; col = col+1)
       {
        cout<<" " ;    
       }
         

    //Print Stars

    for (int k = 0; k < 2 * row+1; k = k+1)
    {

        // Print Star only for 1st and last index

        if (k == 0)
        {
             cout<<"*";    // First Char
        }
        else if (k == 2*row)
        {
             cout<<"*";  // Last Char
        }
        
        else 
        {
            cout<<" ";
        }        
       
    }
    cout<<endl;
       }


    for (int row = 0; row < rowCount; row = row+1)
    {
        //Print SPcaes

        for (int col = 0; col < row; col= col+1)
        {
            cout<<" ";
        }

        // Print Stars

        for (int k = 0; k < 2*rowCount-2*row-1; k = k+1)
        {

            // Star ony for 1st and Last 

            if ( k == 0 || k == 2*rowCount - 2*row -2)
            {
                 cout<<"*";
            }

            // Print Space
            else{

                cout<<" ";
            }
            
           
        }
        
        cout<<endl;
    }

    
    






 }