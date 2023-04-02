/*We have a sandglass that runs for

X seconds. The sand drops from the upper bulb at a rate of
1
1 gram per second. That is, the upper bulb initially contains

X grams of sand.

How many grams of sand will the upper bulb contains after

t seconds?
**ATCoder
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,b,t,mn;
    cin>>a>>b;

    // mn=min(a,b);
    if(a>b)
    {
        t=a-b;
        cout<<t;
    }
    else
        cout<<0<<endl;
    return 0;
}
