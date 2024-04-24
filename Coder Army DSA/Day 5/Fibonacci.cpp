#include<iostream>
#include<vector>
using namespace std;
int main()
{

    //By Default First element in Fibonacci Series is 0 and Second number is 1
       int last,prev,curr,n;
       last =0;
       prev=1;

       cout<<"Enter Number for Series :"<<endl;
       cin>>n;

       cout<<last<<endl;
       cout<<prev<<endl;

       for(int i =2;i<n;i++)
       {
        curr = last+prev;
        cout<<curr<<endl;
        last=prev;
        prev=curr;
       }

}