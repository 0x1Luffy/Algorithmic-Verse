#include<iostream>
#include<vector>
using namespace std;
int main()
{
        // Print squres of 1 to n

    //     int square;
    //     cout<<"Enter the Number: "<<endl;
    //     cin>>square;
    //    for(int i=1;i<=square;i++)
    //    {
    //     cout<<i*i<<endl;
    //    }

        // Print all even numbers till n


        int n;
        cout<<"Enter the number: "<<endl;
        cin>>n;

        for(int i=2;i<=n;i=i+2)
        {
            cout<<"Even Numbers Found Are:" <<i<<endl;
        }
}