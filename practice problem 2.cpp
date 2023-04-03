//AtCoder Beginner Contest 072 OddString
/*You are given a string

s consisting of lowercase English letters.
 Extract all the characters in the odd-indexed positions
 and print the string obtained by concatenating them.
 Here, the leftmost character is assigned the index
1
1. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ar[100000];
   // cout<<"enter your name :";
    cin>>ar;

     for(int i=0;i<strlen(ar);i++)
    {
      if(i%2==0)
      {
          cout<<ar[i];
      }
    }


return 0;
}
