#include<bits/stdc++.h>
using namespace std ;
int main ()
{
    int row,col,i,j;
    cin>>row>>col;
    int ar[row][col];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>ar[i][j];
        }
    }


    if(row!=col)
    {
        cout<<" no"<<endl;
        return 0;
    }
    for(int i=0; i<row; i++)
    {
          for(int j=0; j<col; j++)
          {
             if(i==j)
             {
                 continue;
             }
             if(ar[i][j]>0)
             {
               cout<<" no"<<endl;
               return 0;
             }
          }
    }
  cout<<"Yes"<<endl;
  return 0;
}
