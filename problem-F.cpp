#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0;
    cin>>n>>k;
    cout<<endl;
    int    a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];

    }
    for(int i=0; i<n; i++)
    {
        sort(a,a+n,greater<int>());


    }
    for(int i=0; i<k; i++)
    {
        sum=sum+a[i];
    }


    cout<<sum;

   // cout<<endl;


    return 0;
}

