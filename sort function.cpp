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
   int a[5]={4,3,2,5,1};
   int n=5;
   sort(a,a+n);
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
   return 0;
}
