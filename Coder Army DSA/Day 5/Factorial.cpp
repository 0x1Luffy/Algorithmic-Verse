#include<iostream>
#include<vector>
using namespace std;
int main()
{

        // num = 5 (1*2*3*4*5)
       int num,fact=1;
       cout<<"Enter Number: "<<endl;
       cin>>num;
       
       for(int i=2;i<=num;i++)
       {
        fact = fact*i;
       }
       cout<<fact<<endl;
}