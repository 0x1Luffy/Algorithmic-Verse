#include<iostream>
#include<vector>
using namespace std;
int main()
{
       int n,pow,num;
       cout<<"Enter The Number: "<<endl;
       cin>>n;
       cout<<"Enter The Power: "<<endl;
       cin>>pow;

       num = n;

       for(int i=1;i<pow;i++)
       {
         num = num*n;
       }

       cout<<num;
}