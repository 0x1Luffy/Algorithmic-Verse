#include<iostream>
#include<vector>
using namespace std;
int main()
{
       int row,col;
       int count =1;

       for(row=1;row<=5;row++)
       {
            for(col=1;col<=5;col++)
            {
                cout<<count<<" ";
                count++;
            }
            cout<<endl;
       }
}


/*

    1 2 3 4 5
    6 7 8 9 10
    11 12 13 14
    15 16 17 18
    19 20 21 22

*/