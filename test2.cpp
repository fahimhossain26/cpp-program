#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    int b[5];
    for(int i=0;i<5;i++)
    {
        cin>>b[i];
    }

    for(int i=0;i<5;i++)
    {
        cout<<b[i]<<" ";
    }
    char x[20];
   cin.getline(x,20);
    cout<<x;
    cout<<endl;
    cin>>a;
    cout<<"this number is " <<a;

    return 0;
}
