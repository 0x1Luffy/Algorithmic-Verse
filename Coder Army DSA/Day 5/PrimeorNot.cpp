#include<iostream>
#include<vector>
using namespace std;
int main()
{
       // Prime (Number that is divided my 1 and himslef are PRIME)
       // number less than 2 are NOT PRIME


       int n;
       cout<<"Enter the Number: "<<endl;
       cin>>n;

       if(n<2)
       {
        cout<<"Not Prime"<<endl;
        return 0;
       }
       else{
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                cout<<"Not Prime Number"<<endl;
                return 0;
            }
        }
        cout<<"Prime Number "<<endl;
       }
}