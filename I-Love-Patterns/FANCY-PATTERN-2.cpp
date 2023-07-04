#include<iostream>
using namespace std;

int main()
{
    int rowCount;
    cout<<"Give Row Count Plz" <<endl;
    cin>>rowCount;

    //Upper Half
    
    for (int row = 0; row < rowCount; row = row+1)
    {
        for (int col = 0; col < row+1; col = col+1)
        {
            cout<<row+1;


        if (col!=row)
        
        cout<<"*";
    }
    cout<<endl;
}

 //Lower Half
    
    for (int row = 0; row < rowCount; row = row+1)
    {
        for (int col = 0; col < rowCount-row; col = col+1)
        {
            cout<<rowCount-row;


        if (col!=rowCount-row-1)
        
        cout<<"*";
    }
    cout<<endl;
}



















}
