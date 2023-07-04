#include<iostream>
using namespace std;

int main()
{

    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;

    for (int row = 0; row < rowCount; row = row+1)
    {
        for (int col = 0; col < row+1; col = col+1)
        {
            int ans = col+1;
            char ch = ans + 'A' -1;

            cout<<ch;
        }
    

        for (int col = row; col >=1; col = col-1)
        {

            int ans = col;
            char ch = ans + 'A' - 1;
            cout<<ch;
        }
        
        cout<<endl;
        
    }
    
    
}