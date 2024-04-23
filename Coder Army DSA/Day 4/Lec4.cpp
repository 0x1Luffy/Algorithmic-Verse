#include<iostream>
#include<vector>
using namespace std;
int main()
{
       // int a,b;
       // cout<<"Enter Any Two Numbers: "<<endl;
       // cin>>a>>b;
       // cout<<a+b;


       //TYPE CASTING

       // int a=66;
       // char ch='b';

       // ch=a;
       // cout<<ch;


       // DATA LOSS IN TYPE CASTING

       int d=376627364;   // since int d will now have very big binary representation of that number 
       char c = 'm';  // and char have 1 byte memory that is 8bits and it can bit all the binary representation of int d number data loss occurs
       c=d;
       cout<<c;
}