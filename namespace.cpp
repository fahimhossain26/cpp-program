#include<bits/stdc++.h>
using namespace std;
namespace one
{
     int x=10;
    void fun()
    {

      cout<<"this is namspace one"<<endl;
    }
}
namespace two
{
     int x=20;
    void fun()
    {

     cout<<"this is namespace two"<<endl;
     }
}
//using namespace two;
int main()
 {
     cout<<one::x<<endl;
//fun();
 }


