#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int row,col;
    for(row=1;row<=5;row++)
    {
        for(col=1;col<=5;col++)
        {
            char ch='a'+(row-1);
            cout<<ch;
        }
        cout<<endl;
    }

}


/*

   a a a a a 
   b b b b b
   c c c c c
   d d d d d
   e e e e e



*/