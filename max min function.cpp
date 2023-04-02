//maxx min function on array
#include<bits/stdc++.h>
using namespace std;
int main()
{

  int ar[10]={67,43,12,4,7,21,73,23,9,11};
  int minimum=ar[0];
  for(int i=0;i<10;i++)
  {
      minimum=min(minimum,ar[i]);


  }
   cout<<minimum<<endl;


    /*int a,b,c,d,mn,mx;
    cin>>a>>b>>c>>d;
    mn=min(a,min(b,min(c,d)));
    cout<<mn;
    cout<<endl;

    mx=max(a,max(b,max(c,d)));
    cout<<mx;
    */
}
