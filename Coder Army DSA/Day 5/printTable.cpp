#include<iostream>
#include<vector>
using namespace std;
int main()
{
        int n;
        cout<<"Enter Table To Print: "<<endl;
        cin>>n;
       for(int i=1;i<=10;i=i+1)
       {
            cout<<n<<"X"<<i<<"="<<i*n<<endl;
       }
}


