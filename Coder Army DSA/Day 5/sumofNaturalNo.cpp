#include<iostream>
#include<vector>
using namespace std;
int main()
{
       int n,sum;
       cout<<"Enter any number: "<<endl;
       cin>>n;

       sum = 0;
       for(int i=1;i<=n;i++)
       {
        sum = sum+i;
       }

       cout<<sum<<endl;
}