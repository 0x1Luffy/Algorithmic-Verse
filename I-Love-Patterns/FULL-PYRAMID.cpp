#include<iostream>
using namespace std;
int main()
{
    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;

    for (int row = 0; row < rowCount; row = row+1)
    {
        for (int col = 0; col < rowCount-row-1; col =col+1)
        {
          cout<<" ";  
        }

        for (int j = 0; j < row + 1; j = j+1)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
     
}