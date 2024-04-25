#include<iostream>
#include<vector>
using namespace std;
int main()
{
       char col;
       int row;

       for(row=1;row<=5;row++)
       {
        for(col='a';col<='e';col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
       }
}



/*


    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e
    a b c d e



*/